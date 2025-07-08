#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int &x : arr) cin >> x;

    cout << "Enter window size: ";
    cin >> k;

    deque<int> window;
    for (int i = 0; i <= n - k; ++i) {
        int sum = 0;
        for (int j = i; j < i + k; ++j)
            sum += arr[j];
        cout << sum << " ";
    }
    cout << "\n";

    return 0;
}
