#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string val) : data(val), left(nullptr), right(nullptr) {}
};
void collectLeaves(TreeNode* root, vector<string>& leaves) {
    if (!root) return;
    if (!root->left && !root->right) {
        leaves.push_back(root->data);
        return;
    }
    collectLeaves(root->left, leaves);
    collectLeaves(root->right, leaves);
}
int main() {
    int n;
    cin >> n;
    unordered_map<string, TreeNode*> nodeMap;
    unordered_set<string> declaredNodes;
    vector<tuple<string, string, string>> inputLines;
    string parent, left, right;
    TreeNode* root = nullptr;
    for (int i = 0; i < n; ++i) {
        cin >> parent >> left >> right;
        inputLines.emplace_back(parent, left, right);
        declaredNodes.insert(parent);
    }
    for (int i = 0; i < n; ++i) {
        tie(parent, left, right) = inputLines[i];
        if (!nodeMap.count(parent))
            nodeMap[parent] = new TreeNode(parent);
        TreeNode* parentNode = nodeMap[parent];
        if (i == 0) root = parentNode; // first node is root
        if (left != "null" && declaredNodes.count(left)) {
            if (!nodeMap.count(left))
                nodeMap[left] = new TreeNode(left);
            parentNode->left = nodeMap[left];
        }
        if (right != "null" && declaredNodes.count(right)) {
            if (!nodeMap.count(right))
                nodeMap[right] = new TreeNode(right);
            parentNode->right = nodeMap[right];
        }
    }
    vector<string> leaves;
    collectLeaves(root, leaves);

    for (const string& leaf : leaves) {
        cout << leaf << " ";
    }
    cout << endl;
    return 0;
}