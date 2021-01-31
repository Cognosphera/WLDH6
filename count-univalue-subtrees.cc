// Count Univalue Subtrees

/// recursive

class Solution {
  bool f(TreeNode *x, int &r) {
    if (! x) return true;
    auto fl = f(x->left, r),
         fr = f(x->right, r);
    if (fl && fr && (! x->left || x->left->val == x->val) &&
        (! x->right || x->right->val == x->val))
      return r++, true;
    return false;
  }
public:
  int countUnivalSubtrees(TreeNode *x) {
    int r = 0;
    f(x, r);
    return r;
  }
};

/// post-order traversal with stack

class Solution {
public:
  int countUnivalSubtrees(TreeNode *x) {
    int r = 0;
    stack<pair<TreeNode*, bool>> s;
    for(;;) {
      for (; x; x = x->left)
        s.push({x, true});
      while (! s.empty() && s.top().first->right == x) {
        bool f = s.top().second;
      