#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
int findKthFromEnd(Node* head, int k) {
    Node* first = head;
    Node* second = head;
    for (int i = 0; i < k; i++) {
        if (!first) return -1; // k > length
        first = first->next;
    }
    while (first) {
        first = first->next;
        second = second->next;
    }
    return second ? second->data : -1;
}
int main() {
    int n, k, val;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    cin >> k;

    int result = findKthFromEnd(head, k);
    if (result == -1)
        cout << "Position out of range" << endl;
    else
        cout << result << endl;

    return 0;
}