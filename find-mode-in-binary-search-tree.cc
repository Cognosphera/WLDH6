// Find Mode in Binary Search Tree
class Solution {
  vector<int> a;
  void f(TreeNode* x) {
    if (! x) return;
    a.push_back(x->val);
    f(x->left);
    f(x->right);
  }
public:
 