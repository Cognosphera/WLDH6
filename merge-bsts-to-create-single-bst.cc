
class Solution {
public:
  TreeNode* canMerge(vector<TreeNode*>& ts) {
    int n = ts.size();
    unordered_map<int, TreeNode *> nroot;
    for (TreeNode *t : ts) {
      if (t->left)
        nroot[t->left->val] = t->left;
      if (t->right)
        nroot[t->right->val] = t->right;
    }
    TreeNode *root = nullptr;
    for (TreeNode *t : ts) {
      auto it = nroot.find(t->val);
      if (it == nroot.end()) {
        if (root) return nullptr;
        root = t;
        continue;
      }
      it->second->left = t->left;
      it->second->right = t->right;
    }
    int c = 0, v = INT_MIN;
    for (auto *x = root; x; ) {
      if (TreeNode *y = x->left) {
        while (y->right && y->right != x)
          y = y->right;
        if (!y->right) {
          y->right = x;