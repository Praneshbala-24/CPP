#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        if (head != nullptr)
            head->prev = newNode;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int val, int pos) {
        if (pos <= 1 || head == nullptr) {
            insertAtBeginning(val);
            return;
        }

        Node* temp = head;
        int count = 1;
        while (temp->next != nullptr && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != nullptr)
            temp->next->prev = newNode;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    DoublyLinkedList dll;
    for (int i = 0; i < n; ++i) {
        int type, val, pos;
        cin >> type >> val;

        if (type == 1) {
            dll.insertAtBeginning(val);
        } else if (type == 2) {
            dll.insertAtEnd(val);
        } else if (type == 3) {
            cin >> pos;
            dll.insertAtPosition(val, pos);
        }

        dll.printList();
    }

    return 0;
}