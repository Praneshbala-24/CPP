#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }};
class SinglyLink {
private:
    Node* head;
    Node* tail;
public:
    SinglyLink() {  
        head = nullptr;
        tail = nullptr;
    }
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {       
            head = newNode;
            tail = newNode;
        } else {                     
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " ";
            temp = temp->next;
        }
        cout << endl;
    }};
int main() {
    int n, val;
    cin >> n;
    SinglyLink list;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        list.insertAtEnd(val);
    }
    list.display();
    return 0;
}