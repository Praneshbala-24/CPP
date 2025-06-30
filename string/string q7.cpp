/*Write a C program to change the given string to uppercase without using string library functions.
INPUT & OUTPUT FORMAT:
Input consists of 1 string.
Output print the Uppercase of given string. 
Constraints:
NA
Example:
SAMPLE INPUT :
good 
SAMPLE OUTPUT:
String in uppercase is GOOD*/
#include <iostream>
#include <cctype> 
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]); 
    }
    cout << "String in uppercase is " << str << endl;

    return 0;
}
