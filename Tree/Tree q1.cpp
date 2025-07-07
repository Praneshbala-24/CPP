#include <iostream>
#include <queue>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
TreeNode* buildTreeLevelOrder() {
    int val;
    cin >> val;
    if (val == -1) return nullptr;
    TreeNode* root = new TreeNode(val);
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        int leftVal, rightVal;
        cin >> leftVal;
        if (leftVal == -1) break;
        current->left = new TreeNode(leftVal);
        q.push(current->left);
        cin >> rightVal;
        if (rightVal == -1) break;
        current->right = new TreeNode(rightVal);
        q.push(current->right);
    }
    return root;
}
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(TreeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main() {
    TreeNode* root = buildTreeLevelOrder();

    inorder(root);
    cout << endl;

    preorder(root);
    cout << endl;

    postorder(root);
    cout << endl;

    return 0;
}