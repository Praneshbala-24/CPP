/*Write a C program to find whether the given string is a palindrome or not without using string library functions.
INPUT & OUTPUT FORMAT:
Input consists of 1 string. 
If the given string is a Palindrome display “Palindrome”, else display “Not a Palindrome”. 
Example:
SAMPLE INPUT:
madam*/
#include <iostream>
using namespace std;
int main() {
    string str;
    int length, flag = 1;
    getline(cin, str);  
    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}
