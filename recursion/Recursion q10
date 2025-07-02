#include <iostream>
using namespace std;

// Recursive function to count digits
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    cin >> n;

    // Special case: if n is 0, it has 1 digit
    if (n == 0)
        cout << 1 << endl;
    else
        cout << countDigits(n) << endl;

    return 0;
}
