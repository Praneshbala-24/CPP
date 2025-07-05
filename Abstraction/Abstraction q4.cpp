#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Match {
private:
    int currentScore;
    float currentOver;
    int target;

public:
    // Setters
    void setCurrentScore(int score) {
        currentScore = score;
    }

    void setCurrentOver(float over) {
        currentOver = over;
    }

    void setTarget(int t) {
        target = t;
    }

    // Getters
    int getCurrentScore() {
        return currentScore;
    }

    float getCurrentOver() {
        return currentOver;
    }

    int getTarget() {
        return target;
    }

    // Pure virtual functions
    virtual float calculateRunrate() = 0;
    virtual int calculateBalls() = 0;

    // Display method
    void display(double reqRunRate, int balls) {
        int runsNeeded = target - currentScore;
        cout << "Requirements:" << endl;
        cout << "Need " << runsNeeded << " Runs in " << balls << " balls" << endl;
        cout << "Required Run Rate - " << fixed << setprecision(2) << reqRunRate << endl;
    }

    virtual ~Match() {}
};

// ODI Match Class
class ODIMatch : public Match {
public:
    float calculateRunrate() override {
        int runsNeeded = getTarget() - getCurrentScore();
        float oversLeft = 50 - getCurrentOver();
        return runsNeeded / oversLeft;
    }

    int calculateBalls() override {
        int fullOvers = static_cast<int>(getCurrentOver());
        float partial = getCurrentOver() - fullOvers;
        int ballsBowled = fullOvers * 6 + static_cast<int>(round(partial * 10));
        return 300 - ballsBowled; // 50 overs * 6 balls
    }
};

// T20 Match Class
class T20Match : public Match {
public:
    float calculateRunrate() override {
        int runsNeeded = getTarget() - getCurrentScore();
        float oversLeft = 20 - getCurrentOver();
        return runsNeeded / oversLeft;
    }

    int calculateBalls() override {
        int fullOvers = static_cast<int>(getCurrentOver());
        float partial = getCurrentOver() - fullOvers;
        int ballsBowled = fullOvers * 6 + static_cast<int>(round(partial * 10));
        return 120 - ballsBowled; // 20 overs * 6 balls
    }
};

// Test Match Class
class TestMatch : public Match {
public:
    float calculateRunrate() override {
        int runsNeeded = getTarget() - getCurrentScore();
        float oversLeft = 90 - getCurrentOver();
        return runsNeeded / oversLeft;
    }

    int calculateBalls() override {
        int fullOvers = static_cast<int>(getCurrentOver());
        float partial = getCurrentOver() - fullOvers;
        int ballsBowled = fullOvers * 6 + static_cast<int>(round(partial * 10));
        return 540 - ballsBowled; // 90 overs * 6 balls
    }
};

int main() {
    int formatChoice;
    int score, target;
    float over;

    cout << "Enter the Cricket Format" << endl;
    cout << "1. ODI" << endl;
    cout << "2. T20" << endl;
    cout << "3. Test" << endl;

    cin >> formatChoice;

    cout << "Enter the Current Score" << endl;
    cin >> score;

    cout << "Enter the Current Over" << endl;
    cin >> over;

    cout << "Enter the Target Score" << endl;
    cin >> target;

    Match* match = nullptr;

    if (formatChoice == 1) {
        match = new ODIMatch();
    } else if (formatChoice == 2) {
        match = new T20Match();
    } else if (formatChoice == 3) {
        match = new TestMatch();
    } else {
        cout << "Invalid format choice." << endl;
        return 1;
    }

    match->setCurrentScore(score);
    match->setCurrentOver(over);
    match->setTarget(target);

    int ballsRemaining = match->calculateBalls();
    float reqRunRate = match->calculateRunrate();

    match->display(reqRunRate, ballsRemaining);

    delete match;
    return 0;
}