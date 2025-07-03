#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class Single {
private:
    Node* head;
public:
    Single() {
        head = nullptr;
    }
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " ";  
            }
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    int n, x;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }
    cin >> x;

    Single list;
    for (int i = n - 1; i >= 0; --i) {
        list.insertAtBeginning(values[i]);
    }
    list.insertAtBeginning(x);
    list.display();
    
    return 0;
}