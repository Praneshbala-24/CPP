/*Write a C program to find whether the given two strings are the same or not using string library functions.
INPUT & OUTPUT FORMAT:
Input consists of 2 strings. 
If two strings are same, display “Strings are same”, else display “Strings are not same”. 
Constraints:
NA
Example:
SAMPLE INPUT :
consensus
consensus
SAMPLE OUTPUT:
Strings are same
*/
#include <iostream>
#include <cstring>  
using namespace std;
int main() {
    char str1[100], str2[100];
    cin >> str1;
    cin >> str2;
    if (strcmp(str1, str2) == 0) {
        cout << "Strings are same" << endl;
    } else {
        cout << "Strings are not same" << endl;
    }

    return 0;
}
