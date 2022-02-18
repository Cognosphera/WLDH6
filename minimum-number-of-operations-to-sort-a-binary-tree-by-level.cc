
// Minimum Number of Operations to Sort a Binary Tree by Level
class Solution {
  vector<vector<pair<int, int>>> a;
  void dfs(TreeNode *x, int d) {
    if (!x) return;