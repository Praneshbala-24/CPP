#include <iostream>
#include <algorithm> // for sort
using namespace std;

// Function to sort the array in ascending order
void sortArray(int* arr, int n) {
    sort(arr, arr + n); // STL sort
    cout << "Sorted array is:"<<endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i]<<endl;
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Size of the array

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i]; // Elements of the array

    sortArray(arr, n);

    return 0;
}