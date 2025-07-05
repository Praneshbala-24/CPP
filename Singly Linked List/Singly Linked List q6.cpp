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
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    
    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    
    return prev;
}
void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "List is empty" << endl;
        return 0;
    }
    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    head = reverseList(head);
    printList(head);

    return 0;
}