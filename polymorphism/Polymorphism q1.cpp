#include<iostream>
using namespace std;
class Delivery {
public:
    void pd() {
        string a, b;
        cin >> a >> b;
        cout << "Player details of the delivery:" << endl;
        cout << "Bowler - " << b << endl;
        cout << "Batsman - " << a << endl;
    }
    void runs() {
        int a;
        cin >> a;
        cout << "Number of runs scored in the delivery: " << a << endl;
        if (a == 4) {
            cout << "It is a boundary. " << endl;
        }
        else if (a == 6) {
            cout << "It is a boundary. " << endl;
        }
        else {
            cout << a << endl;
        }
    }
};
int main() {
    int choice;
    cin >> choice;
    Delivery d1;
    if (choice == 1) {
        d1.pd();
    } else {
        d1.runs();
    }
    return 0;
}