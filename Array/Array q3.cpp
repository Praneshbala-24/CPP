#include <iostream>
using namespace std;
int maximum(int n, int *arr) {
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main() {
    int n;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << maximum(n, arr) << endl;
    return 0;
}