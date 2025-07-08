#include <iostream>
#include <cmath>
using namespace std;
bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}
int sumPositiveSquares(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0 && isPerfectSquare(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int n;
    cin >> n;  
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];  
    cout << sumPositiveSquares(arr, n) << endl;
    return 0;
}