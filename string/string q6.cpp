/*Write a C program to find the concatenation of the given two strings using string library functions.

INPUT FORMAT: 

Input consists of 2 strings. 


Constraints:
NA


Example:
SAMPLE INPUT :
Consensus
Academy 

SAMPLE OUTPUT :

The concatenated string is ConsensusAcademy*/
#include<iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[200], str2[100];
    cin >> str1;
    cin >> str2;
    strcat(str1, str2);
    cout << "The concatenated string is " << str1 << endl;
    return 0;
}
