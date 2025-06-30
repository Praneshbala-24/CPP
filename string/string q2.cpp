/*Write a C program to find the length of the given string using string library functions. 
INPUT & OUTPUT FORMAT:
Input consists of 1 string. 
Output print the length of the string.
Constraints:
NA
Example:
SAMPLE INPUT :
Consensus
SAMPLE OUT
The length of Consensus is 9*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;  
    int length = str.length();
    cout << "The length of " << str << " is " << length << endl;

    return 0;
}
