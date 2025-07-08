/*A symmetric matrix is a square matrix that is equal to its transpose. 
Write a C program to find whether a given matrix is a square matrix or not.
Input Format:
The input consists of (m*n+2) integers.
The first integer corresponds to m, the number of rows in the matrix.
The second integer corresponds to n, the number of columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 10.
\
Output Format:
Refer sample output for details.
Constraints:
NA
Example:
Sample Input 1:
2
2
4 5
5 4
Sample Output 1:
Symmetric
Sample Input 2:
2
2
1 1
2 2
Sample Output 2:
Not Symmetric
Explanation:
NA
Public Test Cases:
#	Input	Expected Output
1	
2
2
1 1
2 2
Not Symmetric
2	
2
2
4 5
5 4
Symmetric*/
#include <stdio.h>
using namespace std;
int main() {
    int m, n, matrix[10][10];
    scanf("%d %d", &m, &n);
    if (m != n) {
        printf("Not Symmetric");
        return 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("Not Symmetric");
                return 0;
            }
        }
    }

    printf("Symmetric");
    return 0;
}
