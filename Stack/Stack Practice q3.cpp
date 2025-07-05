#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stack<char> st;
    for (char ch : s) {
        st.push(ch);
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}
