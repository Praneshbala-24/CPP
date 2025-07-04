#include <iostream>
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

class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() {
        head = nullptr;
    }

    void insertAtPosition(int pos, int x) {
        Node* newNode = new Node(x);
        if (pos == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
       
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp != nullptr) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            cout << "Position out of bounds!" << endl;
        }
    }

    void display() {
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
    SinglyLinkedList list;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        list.insertAtPosition(i, val);
    }

    cin >> x;
    int middlePos ;
    if(n==1)
    middlePos = (n+1)/ 2;
    else
    middlePos = n / 2;
    
    list.insertAtPosition(middlePos, x);
    list.display();

    return 0;
}
