// Construct Binary Tree from Preorder and Postorder Traversal
class Solution {
  vector<int> pre, post;
  TreeNode *f(int i, int j, int n) {
    if (!