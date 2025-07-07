#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
TreeNode* buildTree() {
    vector<int> values;
    int val;
    while (cin >> val && val != -1) {
        values.push_back(val);
    }
    if (values.empty()) return nullptr;
    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < values.size()) {
        TreeNode* current = q.front();
        q.pop();
        if (i < values.size() && values[i] != -1) {
            current->left = new TreeNode(values[i]);
            q.push(current->left);
        }
        i++;
        if (i < values.size() && values[i] != -1) {
            current->right = new TreeNode(values[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}
int countNodes(TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
int main() {
    TreeNode* root = buildTree();
    cout << countNodes(root) << endl;
    return 0;
}
