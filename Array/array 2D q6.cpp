/*Diagonal Matrix. A square matrix which has zeros everywhere other than the main diagonal.
Entries on the main diagonal may be any number, including 0.
Write a program to find whether a given matrix is a diagonal matrix or not.
Input Format:
The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row-wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 5.
Output Format:
Print yes if it is a diagonal matrix. Print no if it is not a diagonal matrix.

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
2
1 0
0 2
Sample Output 2:
yes
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int matrix[5][5];  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && matrix[i][j] != 0) {
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
    return 0;
}
