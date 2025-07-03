#include <iostream>
#include <string>
using namespace std;
class Player {
protected:
    string name;
    string teamName;
    long noOfMatches;

public:
    Player(string n, string t, long m) {
        name = n;
        teamName = t;
        noOfMatches = m;
    }

    virtual void displayDetails() {
        cout << "Player: " << name << endl;
        cout << "Team: " << teamName << endl;
        cout << "Number of matches: " << noOfMatches << endl;
    }
};

class Bowler : public Player {
private:
    long noOfWickets;

public:
    Bowler(string n, string t, long m, long w) : Player(n, t, m) {
        noOfWickets = w;
    }
    void displayDetails() override {
        cout << "Player: " << name << endl;
        cout << "Team: " << teamName <<endl;
        cout << "Number of matches: " << noOfMatches <<endl;
        cout << "Number of wickets taken: " << noOfWickets << endl;
    }
};

class Batsman : public Player {
private:
    long noOfRuns;

public:
    Batsman(string n, string t, long m, long r) : Player(n, t, m) {
        noOfRuns = r;
    }

    void displayDetails() override {
        cout << "Player: " << name << endl;
        cout << "Team: " << teamName << endl;
        cout << "Number of matches: " << noOfMatches << endl;
        cout << "Number of runs scored: " << noOfRuns << endl;
    }
};

int main() {
    string name, teamName;
    long noOfMatches;
    getline(cin, name);
    getline(cin, teamName);
    cin >> noOfMatches;
    int choice;
    cin >> choice;
    if (choice == 1) {
        long wickets;
        cin >> wickets;
        Bowler b(name, teamName, noOfMatches, wickets);
        b.displayDetails();
    } 
    else if (choice == 2) {
        long runs;
        cin >> runs;
        Batsman b(name, teamName, noOfMatches, runs);
        b.displayDetails();
    } 
    else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}