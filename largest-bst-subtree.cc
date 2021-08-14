// Largest BST Subtree
class Solution {
  bool postorder(TreeNode *x, long &mn, long &mx, long &size) {
    if (! x) {
      mn = LONG_MAX;
      mx = LONG_MIN;
      size = 0;
      return true;
    }
    long lmn, lmx, ls, rmn, rmx, rs;
    bool lvalid = postorder(x->left, lmn, lmx, ls),
         rvalid = postorder(x->right, rmn, rmx, rs);
    if (lvalid && rvalid && lmx < x->val && x->val < rmn) {
      mn = ls ? lmn : x->val;
      mx = rs ? rm