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

Node* tail = nullptr;

// Insert at end
void insertAtEnd(int val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        newNode->next = newNode;
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

// Insert at beginning
void insertAtBeginning(int val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        newNode->next = newNode;
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
    }
}

// Delete by value (first occurrence)
void deleteByValue(int val) {
    if (tail == nullptr) return;

    Node* curr = tail->next;
    Node* prev = tail;

    do {
        if (curr->data == val) {
            if (curr == prev) {
                // only one node
                delete curr;
                tail = nullptr;
            } else {
                prev->next = curr->next;
                if (curr == tail)
                    tail = prev;
                delete curr;
            }
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != tail->next);
}

// Display the list
void display() {
    if (tail == nullptr) {
        cout << "Empty" << endl;
        return;
    }

    Node* curr = tail->next;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != tail->next);
    cout << endl;
}

// Driver code
int main() {
    int n;
    cin >> n;

    while (n--) {
        int cmd, val;
        cin >> cmd;
        if (cmd == 1) {
            cin >> val;
            insertAtEnd(val);
        } else if (cmd == 2) {
            cin >> val;
            insertAtBeginning(val);
        } else if (cmd == 3) {
            cin >> val;
            deleteByValue(val);
        } else if (cmd == 4) {
            display();
        }
    }

    return 0;
}