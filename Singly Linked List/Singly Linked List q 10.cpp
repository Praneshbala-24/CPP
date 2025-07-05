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
void printList(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}
Node* merge(Node* left, Node* right) {
    if (!left) return right;
    if (!right) return left;
    Node* result = nullptr;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}
Node* getMiddle(Node* head) {
    if (!head) return head;
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* mergeSort(Node* head) {
    if (!head || !head->next) return head;
    Node* middle = getMiddle(head);
    Node* rightHead = middle->next;
    middle->next = nullptr;
    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);
    return merge(left, right);
}
int main() {
    int n, val;
    cin >> n;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    head = mergeSort(head);
    printList(head);
    return 0;
}