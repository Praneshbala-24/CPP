/*Write a  program to find the sum of the elements in the matrix.
Input Format:
First line: Two integers r and c — representing the number of rows and columns of the matrix.
Next r lines: Each line contains c space-separated integers — the elements of each row in the matrix.
Output Format:
A single integer: the sum of all the elements in the matrix.
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
The sum of the elements in the matrix is 27
*//
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int matrix[10][10];
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j]; 
        }
    }
    cout << "The sum of the elements in the matrix is " << sum << endl;
    return 0;
}
