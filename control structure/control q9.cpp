#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    double threshold = 1.0 / sqrt(n);  // leftover per chalk
    double leftover = 0.0;
    int days = 0;
    int chalks = n;
    while (chalks > 0) {
        days += chalks;
        leftover += chalks * threshold;

        chalks = (int)(leftover);
        leftover -= chalks;
    }
    cout << days;
    return 0;
}
