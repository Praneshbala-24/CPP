#include <iostream>
using namespace std;
int findType(int n, int *arr) {
    bool hasEven = false, hasOdd = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0)
            hasEven = true;
        else
            hasOdd = true;
        if (hasEven && hasOdd)
            return 3; 
    }
    if (hasEven)
        return 1; 
    else
        return 2; 
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int result = findType(n, arr);
    if (result == 1)
        cout << "Even" << endl;
    else if (result == 2)
        cout << "Odd" << endl;
    else
        cout << "Mixed" << endl;
    return 0;
}