// Check Completeness of a Binary Tree
class Solution {
  int cc;
  int c(TreeNode *x) {
    return x ? 1 + c(x->left) + c(x->right) : 0;
  }
  bool f(TreeNode *x, int i) {
    return !x || i < cc && f(x->left, 2*i+1) && f(x->right, 2*i+2);
  }
public:
  bool isCompleteTree(TreeNode *root) {
    cc = c(root);
    return f(root, 0);
  }
};

///

class Solution {
public:
  bool isCompleteTree(TreeNode *root) {
    vector<TreeNode *> cur{root}, suc;
    for(;;) {
      bool null = false