// Validate Binary Search Tree

class Solution {
public:
  bool isValidBST(TreeNode *x) {
    TreeNode *y = NULL;
    stack<TreeNode *> s;
    for(;;) {
      for (; x; x = x->left)
        s.push(x);
      if (s.empty())
        return true;
      x = s.top();
      s.pop();
      if (y && x->val <= y->val)
        return false;
      y = x;
      x = x->right;
    }
  }
};

///

class Solution {
public:
  bool isValidBST(TreeNode *root) {
    return f(root, NULL, NULL);
  }
  bool f(TreeNode *x, TreeNode *l, TreeNode *h) {
    return !x || (!l || l->val