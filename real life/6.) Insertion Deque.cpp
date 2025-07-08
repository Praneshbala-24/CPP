#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> dq;
    string command;
    int value;

    cout << "Enter commands (F x / B x), end with EOF (Ctrl+D):\n";
    while (cin >> command >> value) {
        if (command == "F")
            dq.push_front(value);
        else if (command == "B")
            dq.push_back(value);
    }

    cout << "Final Deque: ";
    for (int x : dq) cout << x << " ";
    cout << "\n";

    return 0;
}
