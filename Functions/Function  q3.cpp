/*It was Raj's first day at school. 
His teacher Anu asked the students to meet every other student in the class and introduce about themselves. 
The teacher asked them to handshake with each other when they meet. 
If there are n number of students in the class, write a function to find the total number of 
handshakes made by the students using (With return and Without Argument method).

INPUT & OUTPUT FORMAT:
Input consists of 1 integer.
First input corresponds to the total number of students.
The output consists of 1 integer.

Example:
SAMPLE INPUT:
15
SAMPLE OUTPUT:
105*/
#include <iostream>
using namespace std;
int totalHandshakes() {
    int n;
    cin >> n;
    return (n * (n - 1)) / 2;
}
int main() {
    cout << totalHandshakes();
    return 0;
}
