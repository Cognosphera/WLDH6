// House Robber III
class Solution {
  pair<int, int> f(TreeNode *x) {
    if (! x) return {0, 0};
    auto fl = f(x->left), fr = f(x->right);
   