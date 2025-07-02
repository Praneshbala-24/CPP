
#include <iostream>
using namespace std;

// Recursive linear search function (1-based indexing)
int linearSearch(int arr[], int n, int target, int index = 0) {
    if (index == n)
        return -1;
    if (arr[index] == target)
        return index + 1;  // +1 for 1-based indexing
    return linearSearch(arr, n, target, index + 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int target;
    cin >> target;

    cout << linearSearch(arr, n, target) << endl;
    return 0;
