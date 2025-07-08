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

void findPairs(int target) {
    Node* left = head;
    Node* right = tail;
    bool found = false;

    while (left != nullptr && right != nullptr && left != right && right->next != left) {
        int sum = left->data + right->data;
        if (sum == target) {
            cout << left->data << " " << right->data << "\n";
            found = true;
            left = left->next;
            right = right->prev;
        } else if (sum < target) {
            left = left->next;
        } else {
            right = right->prev;
        }
    }

    if (!found) {
        cout << "No pair found\n";
    }
}

int main() {
    int n;
    cin >> n;

    // Read list elements
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        insertAtEnd(val);
    }

    int x;
    cin >> x;

    findPairs(x);

    return 0;
}