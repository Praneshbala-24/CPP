#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to print circular list once from head
void printCircularList(Node* head) {
    if (!head) {
        cout << "Empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Empty" << endl;
        return 0;
    }

    Node* head = nullptr;
    Node* tail = nullptr;

    // Build the circular linked list
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            head->next = head; // circular
        } else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cin >> k;

    if (k <= 0) {
        cout << "Invalid Position" << endl;
        return 0;
    }

    if (k == 1) {
        // Delete head
        if (head == head->next) {
            // Only one node
            delete head;
            cout << "Empty" << endl;
            return 0;
        } else {
            Node* temp = head;
            tail->next = head->next;
            head = head->next;
            delete temp;
        }
    } else {
        Node* curr = head;
        int count = 1;
        // Move to the node just before the one to delete
        while (count < k - 1 && curr->next != head) {
            curr = curr->next;
            count++;
        }

        // If we reached head again before reaching k-1 node, invalid position
        if (curr->next == head || curr->next == nullptr) {
            cout << "Invalid Position" << endl;
            count++;
            return 0;
        }

        Node* toDelete = curr->next;
        curr->next = toDelete->next;

        // If deleting tail, update tail
        if (toDelete == tail) {
            tail = curr;
        }

        delete toDelete;
    }

    printCircularList(head);
    return 0;
}