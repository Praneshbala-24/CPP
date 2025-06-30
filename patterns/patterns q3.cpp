#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int start = 1; start <= n; start++) {
        for (int num = start; num <= n; num++) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
