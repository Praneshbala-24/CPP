#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Print stars for each row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
