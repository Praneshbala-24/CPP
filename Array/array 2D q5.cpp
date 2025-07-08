/*A magic square is an arrangement of numbers (usually integers) in a square grid, where the numbers in each row, and in each column,
and the numbers in the forward and backward main diagonals, all add up to the same number.

Write a program to find whether a given matrix is a magic square or not.
Input Format:
The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 5.

Output Format:
Print yes if it is a magic square. Print no if it is not a magic square.


Constraints:
NA


Example:
Sample Input 1:
2
4 5
5 4

Sample Output 1:
no

Sample Input 2:
3
4 9 2
3 5 7
8 1 6

Sample Output 2:
yes
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[5][5];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (j = 0; j < n; j++) {
        sum += matrix[0][j];
    }
    for (i = 1; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) {
            cout << "no";
            return 0;
        }
    }
    for (j = 0; j < n; j++) {
        int colSum = 0;
        for (i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) {
            cout << "no";
            return 0;
        }
    }
    int diag1 = 0;
    for (i = 0; i < n; i++) {
        diag1 += matrix[i][i];
    }
    if (diag1 != sum) {
        cout << "no";
        return 0;
    }
    int diag2 = 0;
    for (i = 0; i < n; i++) {
        diag2 += matrix[i][n - 1 - i];
    }
    if (diag2 != sum) {
        cout << "no";
        return 0;
    }
    cout << "yes";
    return 0;
}
