#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}
string isBalanced(const string& spell) {
    stack<char> st;
    for (char ch : spell) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty() || !isMatchingPair(st.top(), ch)) {
                return "Not Balanced";
            }
            st.pop();
        }
    }
    return st.empty() ? "Balanced" : "Not Balanced";
}
=
int main() {
    int T;
    cin >> T;

    while (T--) {
        string spell;
        cin >> spell;
        cout << isBalanced(spell) << endl;
    }
    return 0;
}
