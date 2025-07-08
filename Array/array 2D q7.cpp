/*Uniformity matrix is a matrix in which all the elements in the matrix are either completely even or completely odd. 
Write a C program to find whether a given matrix is a uniformity matrix or not.
Input Format:
The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 5.
Output Format:
Print Yes if it is a uniformity matrix. Print No if it is not a uniformity matrix.
Constraints:
NA
Example:
Sample Input 1:
2
4 5
5 4
Sample Output 1:
No
Sample Input 2:
2
4 0
0 2
Sample Output 2:
Yes*/

#include <stdio.h>

int main() {
    int n, matrix[5][5];
    scanf("%d", &n);

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isEven = matrix[0][0] % 2 == 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((matrix[i][j] % 2 == 0) != isEven) {
                printf("No");
                return 0;
            }
        }
    }

    printf("Yes");
    return 0;
}
