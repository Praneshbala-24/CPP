#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> series(n);
    if (n >= 1) series[0] = 2;
    if (n >= 2) series[1] = 4;
    for (int i = 2; i < n; i++) {
        int diff1 = series[i-1] - series[i-2]; 
        int diff2 = 0;
        if(i-2 > 0)
            diff2 = (series[i-2] - series[i-3]);
        else
            diff2 = 1; 
        series[i] = series[i-1] + diff1 + diff2; 
    }

    for (int i = 0; i < n; i++) {
        cout << series[i] << " ";
    }
    return 0;
}
