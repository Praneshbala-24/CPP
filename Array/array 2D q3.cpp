/*Write a  program to find the maximum element in each column of the matrix.

Input Format:
The input consists of (m*n+2) integers.
The first integer corresponds to m, the number of rows in the matrix.
The second integer corresponds to n, the number of columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 10.

Output Format:
Refer sample output for details.


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
6
9

*//
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[10][10];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int col = 0; col < n; col++) {
        int maxInCol = matrix[0][col]; 
        for (int row = 1; row < m; row++) {
            if (matrix[row][col] > maxInCol) {
                maxInCol = matrix[row][col];
            }
        }
        cout << maxInCol <<endl;
    }

    return 0;
}
