#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* random;
    Node(int val) {
        data = val;
        next = nullptr;
        random = nullptr;
    }
};
void printData(Node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}
void printRandomIndices(Node* head, unordered_map<Node*, int>& nodeToIndex) {
    while (head) {
        if (head->random == nullptr)
            cout << -1;
        else
            cout << nodeToIndex[head->random];
        
        if (head->next) cout << " ";
        head = head->next;
    }
    cout << endl;
}
Node* cloneList(Node* head) {
    if (!head) return nullptr;
    unordered_map<Node*, Node*> oldToNew;
    Node* curr = head;
    while (curr) {
        oldToNew[curr] = new Node(curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr) {
        oldToNew[curr]->next = oldToNew[curr->next];
        oldToNew[curr]->random = oldToNew[curr->random];
        curr = curr->next;
    }
    return oldToNew[head];
}
int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << endl << endl;
        return 0;
    }
    Node* head = nullptr;
    Node* tail = nullptr;
    vector<Node*> nodes(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
        nodes[i] = newNode;
    }
    for (int i = 0; i < n; i++) {
        int randIdx;
        cin >> randIdx;
        if (randIdx != -1)
            nodes[i]->random = nodes[randIdx];
    }
    Node* clonedHead = cloneList(head);
    printData(clonedHead);
    unordered_map<Node*, int> nodeToIndex;
    Node* temp = clonedHead;
    int idx = 0;
    while (temp) {
        nodeToIndex[temp] = idx++;
        temp = temp->next;
    }
    printRandomIndices(clonedHead, nodeToIndex);

    return 0;
}