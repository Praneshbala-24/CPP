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
Node* tail = nullptr;

void insertAtEnd(int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void printForward() {
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

void printBackward() {
    if (!tail) {
        cout << "Empty\n";
        return;
    }
    Node* temp = tail;
    while (temp) {
        cout << temp->data;
        if (temp->prev) cout << " ";
        temp = temp->prev;
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Empty\nEmpty\n";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertAtEnd(val);
    }

    printForward();
    printBackward();

    return 0;
}