#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;

public:
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void deleteBeginning() {
        if (!head) {
            cout << "Empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head) head->prev = nullptr;
        else tail = nullptr; // List became empty
        delete temp;
        printList();
    }

    void deleteEnd() {
        if (!tail) {
            cout << "Empty\n";
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = nullptr;
        else head = nullptr; // List became empty
        delete temp;
        printList();
    }

    void deleteAtPosition(int pos) {
        if (!head) {
            cout << "Empty\n";
            return;
        }
        if (pos == 1) {
            deleteBeginning();
            return;
        }
        Node* curr = head;
        int count = 1;
        while (curr && count < pos) {
            curr = curr->next;
            count++;
        }
        if (!curr) {
            cout << "Invalid position\n";
            return;
        }
        if (curr == tail) {
            deleteEnd();
            return;
        }
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
        printList();
    }

    void printList() {
        if (!head) {
            cout << "Empty\n";
            return;
        }
        Node* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << "\n";
    }
};

int main() {
    int n;
    cin >> n;

    DoublyLinkedList dll;

    // Initial list for testing purposes
    dll.insert(10);
    dll.insert(20);
    dll.insert(30);

    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            dll.deleteBeginning();
        } else if (op == 2) {
            dll.deleteEnd();
        } else if (op == 3) {
            int pos;
            cin >> pos;
            dll.deleteAtPosition(pos);
        }
    }
    return 0;
}