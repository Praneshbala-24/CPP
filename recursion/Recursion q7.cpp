#include <iostream>
using namespace std;

// Recursive function to find the largest element
int findLargest(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int maxInRest = findLargest(arr, n - 1);
    return (arr[n - 1] > maxInRest) ? arr[n - 1] : maxInRest;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findLargest(arr, n) << endl;

    return 0;
}
