#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int width = 2 * n - 1;  
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        int leading_spaces = (width - stars) / 2;
        for (int s = 0; s < leading_spaces; s++) {
            cout << "  "; 
        }
        for (int j = 0; j < stars; j++) {
            cout << "*";
            if (j != stars - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
