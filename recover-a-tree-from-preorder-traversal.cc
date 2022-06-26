// Recover a Tree From Preorder Traversal
class Solution {
public:
  TreeNode *recoverFromPreorder(string S) {
    char *s = (char *)S.c_str(), *e;
    vector<pair<TreeNode *, int> > st{{new Tre