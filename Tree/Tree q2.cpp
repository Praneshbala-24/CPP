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

// Build tree from level order input, where -1 means NULL child
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

        // Left child
        if (i < values.size() && values[i] != -1) {
            current->left = new TreeNode(values[i]);
            q.push(current->left);
        }
        i++;

        // Right child
        if (i < values.size() && values[i] != -1) {
            current->right = new TreeNode(values[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

// Calculate height in terms of LEVELS (root is at level 1)
int getHeight(TreeNode* root) {
    if (!root) return 0;  // base case: no levels in empty tree
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    return max(left, right) + 1;
}

int main() {
    TreeNode* root = buildTree();
    cout << getHeight(root) << endl;
    return 0;
}