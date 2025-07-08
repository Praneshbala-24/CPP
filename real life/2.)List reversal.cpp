#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;
    int x;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; ++i) {
        int val;
        cin >> val;
        lst.push_back(val);
    }

    cout << "List: ";
    for (int val : lst) cout << val << " ";
    cout << "\n";

    cout << "Enter element to delete: ";
    cin >> x;
    lst.remove(x);

    lst.reverse();
    cout << "Reversed List after Deletion: ";
    for (int val : lst) cout << val << " ";
    cout << "\n";

    return 0;
}
