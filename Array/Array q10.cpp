#include <iostream>
using namespace std;
int* createarray(int size) {
    return new int[size + 1];
}
int getelements(int* arr, int size) {
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
    return 0;
}
int insert(int* arr, int size, int position, int value) {
    if (position > size || position < 1) {
        cout << "Invalid Input" << endl;
        return -1;
    }
    for (int i = size; i >= position; --i)
        arr[i] = arr[i - 1];
    arr[position - 1] = value; 
    cout << "Array after insertion is:"<<endl;
    for (int i = 0; i <= size; ++i)
        cout << arr[i]<<endl;
    cout << endl;
    return 0;
}
int main() {
    int size, position, value;
    cin >> size;
    int* arr = createarray(size);
    getelements(arr, size);
    cin >> position;
    cin >> value;
    insert(arr, size, position, value);
    delete[] arr;
    return 0;
}
