#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl;
    forward_list<int>::iterator tail;
    fl.assign({}); // initialize to empty
    tail = fl.before_begin();

    cout << "Enter numbers (-1 to stop): ";
    int x;
    while (cin >> x && x != -1) {
        if (x % 2 == 0) {
            fl.push_front(x);
        } else {
            tail = fl.insert_after(tail, x);
        }
    }

    cout << "Final forward_list: ";
    for (int v : fl) cout << v << " ";
    cout << "\n";

    return 0;
}
