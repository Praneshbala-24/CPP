/*Write a program to find the maximum element in the matrix.

Input Format:
First line: Two integers r and c — representing the number of rows and columns of the matrix.

Next r lines: Each line contains c space-separated integers — the elements of each row in the matrix.

Output Format:
A single integer: the maximum element in the matrix.


Constraints:
NA


Example:
Sample Input 1: 
3
2
4 5
6 9
0 3

Sample Output 1:
The maximum element is 9*/


#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxElement = matrix[0][0]; 
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    cout << "The maximum element is " << maxElement << endl;

    return 0;
}
