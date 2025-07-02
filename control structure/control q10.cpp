#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, temp;
    cin >> num;
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (num % sum == 0) {
        cout << "Harshard Number" << endl;
    } else {
        cout << "Not Harshard Number" << endl;
    }
    return 0;
}
