// Construct Binary Tree from Inorder and Postorder Traversal

// iterative

class Solution {
public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    if (inorder.empty()) return nullptr;
    stack<TreeNode *> s;
    TreeNode *x = nullptr;
    auto i = inorder.begin(), j = postorder.begin();
    while (j != postorder.end())
      if (! s.empty() && s.top()->val == *j) {
        s.top()->right = x;
        x = s.top();
        s.pop();
        ++j;
      } else {
        auto y = new TreeNode(*i++);
        y->left = x;
        x = nullptr;
        s.push(y);
      }
    return x;
  }
};

// recursive

#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)