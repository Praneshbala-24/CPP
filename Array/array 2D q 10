/*A lower triangular matrix is a square matrix in which all the elements above the diagonal are zero.
That is, all the non-zero elements are in the lower triangle. 
Write a C program to find whether a given matrix is a lower triangular matrix or not.
Input Format:
The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 5.

Output Format:
Print yes if it is a lower triangular matrix . Print no if it is not a lower triangular matrix.


Constraints:
NA


Example:
Sample Input 1:
2
1 0
2 3

Sample Output 1:
yes

Sample Input 2:

2
1 2
3 3

Sample Output 2:
no


Explanation:
NA
Public Test Cases:
#	Input	Expected Output
1	
2
1 2
0 3
no
2	
2
1 2
3 3
no*/

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
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                cout << "no";
                return 0;
            }
        }
    }

    cout << "yes";
    return 0;
}
