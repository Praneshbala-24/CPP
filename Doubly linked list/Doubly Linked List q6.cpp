#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* head = nullptr;
Node* previous = nullptr;

void convertToDLL(Node* root) {
    if (!root) return;
    convertToDLL(root->left);

    if (!previous) {
        head = root;
    } else {
        previous->right = root;
        root->left = previous;
    }
    previous = root;

    convertToDLL(root->right);
}

void printDLL(Node* head) {
    Node* temp = head;
    if (!temp) {
        cout << "{}\n";
        return;
    }
    while (temp) {
        cout << temp->data;
        if (temp->right) cout << " ";
        temp = temp->right;
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "{}\n";
        return 0;
    }

    vector<Node*> nodes(n);
    vector<pair<int, int>> children(n);

    for (int i = 0; i < n; ++i) {
        int val, l, r;
        cin >> val >> l >> r;
        nodes[i] = new Node(val);
        children[i] = {l, r};
    }

    for (int i = 0; i < n; ++i) {
        int l = children[i].first;
        int r = children[i].second;
        if (l != -1) nodes[i]->left = nodes[l];
        if (r != -1) nodes[i]->right = nodes[r];
    }

    convertToDLL(nodes[0]);
    printDLL(head);

    return 0;
}