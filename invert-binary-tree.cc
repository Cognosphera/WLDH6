// Invert Binary Tree

// recursive
class Solution {
public:
  TreeNode* invertTree(TreeNode* root) {
    if (root) {
      swap(root->left, root->right);
      invertTree(root->left)