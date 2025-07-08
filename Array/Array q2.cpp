#include<iostream>
using namespace std;
void countEvenOdd(int arr[], int n) {
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Odd: " << oddCount << endl;
    cout << "Even: " << evenCount << endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    countEvenOdd(arr, n);
    return 0;
}
