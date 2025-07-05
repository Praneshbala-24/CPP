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
void insert(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = tail->next;
    }
}
Node* mergeSortedLists(Node* l1, Node* l2) {
    Node dummy(0);
    Node* tail = &dummy;
    while (l1 && l2) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return dummy.next;
}
void printList(Node* head) {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    int n1, n2, val;
    cin >> n1;
    Node* head1 = nullptr;
    Node* tail1 = nullptr;
    for (int i = 0; i < n1; i++) {
        cin >> val;
        insert(head1, tail1, val);
    }
    cin >> n2;
    Node* head2 = nullptr;
    Node* tail2 = nullptr;
    for (int i = 0; i < n2; i++) {
        cin >> val;
        insert(head2, tail2, val);
    }
    Node* mergedHead = mergeSortedLists(head1, head2);
    printList(mergedHead);
    return 0;
}