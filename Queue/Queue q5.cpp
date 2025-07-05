#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int>& q) {
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}
int main() {
    int N;
    cin >> N;

    queue<int> q;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }

    reverseQueue(q);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
