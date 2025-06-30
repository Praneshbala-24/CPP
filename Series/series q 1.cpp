
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num1 = 7;
    int num2 = 5;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << num1 << " ";
            num1++; 
        } else {
            cout << num2 << " ";
            num2++; 
        }
    }
    return 0;
}
