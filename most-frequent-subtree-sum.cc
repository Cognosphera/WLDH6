// Most Frequent Subtree Sum
class Solution {
  unordered_map<int, int> c;
  int f(TreeNode* x) {
    int s = 0;
    if (x->left) s += f(x->left);
    if (x->right) s += f(x->right);
    ++c[s += x->val];
    return s;
  }
public:
  vector<int> findFrequ