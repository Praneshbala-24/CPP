 #include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to check if the list is circular
bool isCircular(Node* head) {
    if (!head) return false;
    Node* temp = head->next;
    while (temp && temp != head) {
        temp = temp->next;
    }
    return (temp == head);
}

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << "NO\n";
        return 0;
    }

    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < n; ++i) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    int circularFlag;
    cin >> circularFlag;
    if (circularFlag == 1) {
        tail->next = head; // Make the list circular
    }

    if (isCircular(head)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}