/*Write a C program to find the reverse of the given string without using string library functions.
INPUT FORMAT:
Input consists of 1 string. 
Constraints:
NA
Example:
SAMPLE INPUT & OUTPUT:
Consensus
The reversed string is susnesnoC. 
Explanation:
NA
Public Test Cases:
#	Input	Expected Output
1	
Consensus
The reversed String is susnesnoC.
2	
programming
The reversed String is gnimmargorp.*/
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "The reversed String is ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << "."<<endl;

    return 0;
}
