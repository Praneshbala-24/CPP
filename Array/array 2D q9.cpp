/*The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row wise order, first row first, then second row and so on.
Assume that the maximum value of m and n is 5.
Output Format:
Print yes if it is an upper triangular matrix . Print no if it is not an upper triangular matrix.
Constraints:
NA
Example:
Sample Input 1:
2
1 2
0 3
Sample Output 1:
Yes
Sample Input 2:
2
1 2
3 3
Sample Output 2:
No
Explanation:
NA
Public Test Cases:
#	Input	Expected Output
1	
2
1 2
0 3
Yes
2	
2
1 2
3 3
No*/

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
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
