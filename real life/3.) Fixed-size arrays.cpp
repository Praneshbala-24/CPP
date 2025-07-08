#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    array<int, 5> arr;
    cout << "Enter 5 numbers:\n";
    for (int &x : arr) cin >> x;

    int sum = accumulate(arr.begin(), arr.end(), 0);
    double avg = sum / 5.0;
    int maxVal = *max_element(arr.begin(), arr.end());

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << avg << "\n";
    cout << "Max: " << maxVal << "\n";

    cout << "Reverse: ";
    for (auto it = arr.rbegin(); it != arr.rend(); ++it)
        cout << *it << " ";
    cout << "\n";

    return 0;
}
