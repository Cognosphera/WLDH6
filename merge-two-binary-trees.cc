// Merge Two Binary Trees
class Solution {
  void f(TreeNode*& s, TreeNode* a, TreeNode* b) {
    if (! a && ! b) return;
    s = new TreeNode((a ? a->val : 0) + (b ? b->val : 0));
    f(s->lef