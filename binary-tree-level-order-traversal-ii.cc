// Binary Tree Level Order Traversal II
class Solution {
public:
  vector<vector<int> > levelOrderBottom(TreeNode *root) {
    vector<vector<int>> r;
    if (! root) return r;
    queue<pair<TreeNode 