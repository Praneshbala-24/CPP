#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1, b = 2;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
