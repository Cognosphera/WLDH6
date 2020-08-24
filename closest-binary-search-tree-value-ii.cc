// Closest Binary Search Tree Value II
class Solution {
public:
  vector<int> closestKValues(TreeNode* root, double target, int k) {
    stack<TreeNode*> sl, sr;
    TreeNode *x = root;
    while (x)
      if (x->val <= target) {
        sl.push(x);
        x = x->right;
      } else
        x = x->left;
    x = root;
    while (x)
      if (x->val > target) {
        sr.push(x);
        x = x->left;
      } else
        x = x->right;
    auto popl = [&]() {
      int v = sl.top()->val;
      auto x = sl.top()->left;
      sl.pop();
      for (; x; x = x->right)
   