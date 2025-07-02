#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;
    cin >> num;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    cout << factorial << endl;

    return 0;
}
