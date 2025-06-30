/*Write a C program to change the given string to lowercase without using string library functions.
INPUT & OUTPUT FORMAT
Input consists of 1 string.
Output print the Lowercase of given string.
Example:
SAMPLE INPUT :
GOOD 
SAMPLE OUTPUT :
String with lowercase is good*/
#include <iostream>
using namespace std;
int main() {
    string str;
    int length, flag = 1;
    cout << "Enter a string: ";
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
