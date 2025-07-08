#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read size of the array

    int arr[n]; // Declare array of size n

    // Read n elements into the array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Print the array elements
    for (int i = 0; i < n; ++i) {
        cout << arr[i] <<endl;
    }

    return 0;
}