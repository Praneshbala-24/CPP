#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

Node* head = nullptr;

void insertAtEnd(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void reverseList() {
    Node* curr = head;
    Node* temp = nullptr;

    while (curr) {
        // Swap next and prev
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        // Move to next node (which is prev now)
        curr = curr->prev;
    }

    // Update head
    if (temp) {
        head = temp->prev;
    }
}

void printList() {
    if (!head) {
        cout << "Empty\n";
        return;
    }
    Node* temp = head;
    while (temp) {
        cout << temp->data;
        if (temp->next) cout << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Empty\n";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertAtEnd(val);
    }

    reverseList();
    printList();

    return 0;
}