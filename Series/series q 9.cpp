#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int base = 11 + 4 * i;
        cout << base * base;
        if (i != n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
