// Recover Binary Search Tree
// Morris in-order traversal

class Solution {
public:
  void recoverTree(TreeNode *p) {
    TreeNode *u = NULL, *v, *l= NULL;
    while (p) {
      TreeNode *q = p->left;
      if (q) {
        