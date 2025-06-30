/*Wite a C program to count the number of vowels in the given string.
INPUT & OUTPUT FORMAT:
Input consists of 1 string. 
Output print the number of Vowels.
Example:
SAMPLE INPUT : 
Consensus
SAMPLE OUTPUT :
Number of vowels: 3*/
#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;
    getline(cin, str);

    for (int i = 0; i < (int)str.length(); i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}
