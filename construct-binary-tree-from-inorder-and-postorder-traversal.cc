// Construct Binary Tree from Inorder and Postorder Traversal

// iterative

class Solution {
public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    if (inorder.empty()) return nullptr;
    stack<TreeNode *> s;
  