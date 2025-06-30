#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int term = 6;
    int diff = 3;
    for (int i = 0; i < n; i++) {
        cout << term << " ";
        term = term + diff;
        diff += 2;  
    }
    return 0;
}
