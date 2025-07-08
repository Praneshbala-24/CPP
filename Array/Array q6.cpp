#include<iostream>
using namespace std;
int* createarray(int size) {
    return new int[size]; // Dynamic allocation
}

// Function to read array elements
void getelements(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
}

// Function to check if arrays are the same in size and sum
int findsame(int* arr1, int size1, int* arr2, int size2) {
    if (size1 != size2)
        return 0; // Different sizes

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < size1; ++i)
        sum1 += arr1[i];
    for (int i = 0; i < size2; ++i)
        sum2 += arr2[i];

    return (sum1 == sum2) ? 1 : 0;
}

int main() {
    int size1, size2;
    cin >> size1 >> size2;

    int* arr1 = createarray(size1);
    int* arr2 = createarray(size2);

    getelements(arr1, size1);
    getelements(arr2, size2);

    int result = findsame(arr1, size1, arr2, size2);

    if (result == 1)
        cout << "Same" << endl;
    else
        cout << "Not Same" << endl;

    delete[] arr1; // Free memory
    delete[] arr2;

    return 0;
}