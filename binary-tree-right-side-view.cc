// Binary Tree Right Side View
// pre-order

class Solution {
public:
  vector<int> rightSideView(TreeNode *x) {
    vector<int> r;
    stack<pair<TreeNode *, int>> s;
    int ml = 0, l = 0;
    for(;;) {
      while (x) {
        if (l == ml)
          r.push_back(x->val), ml++;
        if (x->left)
          s.push(make_pair(x->left, l+1));
        x = x->right;
        l++;
      }
      if (s.empty()) break;
      x = s.top().first;
      l = s.top().second;
      s.pop();
    }
    return r;
  }
};

// level-order

class Solution {
public:
  vector<int> rightSideView(TreeNode *x) {
    vector<int> r;
    