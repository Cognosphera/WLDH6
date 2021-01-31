// Count Univalue Subtrees

/// recursive

class Solution {
  bool f(TreeNode *x, int &r) {
    if (! x) return true;
    auto fl = f(x->left, r),
         fr = f(x->right, r);
    if (fl && fr && (! x->left || x->le