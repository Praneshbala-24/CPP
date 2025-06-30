/*You're building a simple password checker. Given a string (like a password or input), your task is to count:
Total number of uppercase letters
Total number of lowercase letters
Total number of digits
Total number of special characters (not a letter or digit)
Your job is to write a program that prints these four counts.
Input Format:
A single line string (maximum 100 characters)
Output Format:
4 integers in a single line:
uppercase lowercase digits special
Constraints:
1 ≤ length of string ≤ 100
Input can contain letters, numbers, symbols, and spaces
Example:

Sample Input:
Hello@2025!

Sample Output:
1 4 4 2*/
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int special = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            uppercase++;
        }
        else if (c >= 'a' && c <= 'z') {
            lowercase++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else {
            special++;
        }
    }
    cout << uppercase << " " << lowercase << " " << digits << " " << special << endl;

    return 0;
}

