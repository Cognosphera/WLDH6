// Amount of Time for Binary Tree to Be Infected
class Solution {
  int start, ans = 0;
  pair<int, int> dfs(TreeNode *x) {
    int h = 0, dep = x->val == start ? 0 : -1;
    for (auto *y : {x->left, x->right}) {
      if (!y) continue;
      auto [h1, dep1] = dfs(y);
      if (dep >= 0)
        ans = max(ans, d