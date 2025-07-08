#include <iostream>
using namespace std;
int* createarray(int size) {
    return new int[size];
}
void getelements(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
}
void arraysum(int* arr1, int size1, int* arr2, int size2) {
    if (size1 != size2) {
        cout << "Size mismatch!" << endl;
        return;
    }
    for (int i = 0; i < size1; ++i)
        cout << arr1[i] + arr2[i] <<endl;
    cout << endl;
}
int main() {
    int size1;
    cin >> size1;
    int* arr1 = createarray(size1);
    getelements(arr1, size1);
    int size2;
    cin >> size2;
    int* arr2 = createarray(size2);
    getelements(arr2, size2);
    arraysum(arr1, size1, arr2, size2);
    delete[] arr1;
    delete[] arr2;
    return 0;
}