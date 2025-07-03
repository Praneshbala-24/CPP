#include <iostream>
#include <string>
using namespace std;
class Player {
protected:
    string name;
    string country;
public:
    Player(string name, string country) {
        this->name = name;
        this->country = country;
    }
    virtual void displayDetails() {
        cout << "Player Details:" << endl;
        cout << "Player name: " << name << endl;
        cout << "Country: " << country << endl;
    }
};
class InternationalPlayer : public Player {
private:
    string capNumber;
    long noOfTestAppearance;
    long noOfODIAppearance;
public:
    InternationalPlayer(string name, string country, string capNumber, long test, long odi)
        : Player(name, country) {
        this->capNumber = capNumber;
        this->noOfTestAppearance = test;
        this->noOfODIAppearance = odi;
    }
    void displayDetails() override {
        cout << "Player name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Cap number: " << capNumber << endl;
        cout << "Number of test appearance: " << noOfTestAppearance << endl;
        cout << "Number of ODI appearance: " << noOfODIAppearance << endl;
    }
};
int main() {
    string name, country, capNumber;
    long testAppearances, odiAppearances;
    getline(cin, name);
    getline(cin, country);
    getline(cin, capNumber);
    cin >> testAppearances;
    cin >> odiAppearances;
    InternationalPlayer ip(name, country, capNumber, testAppearances, odiAppearances);
    ip.displayDetails();
    return 0;
}
