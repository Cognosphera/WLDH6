// Convert Sorted Array to Binary Search Tree
class Solution {
public:
  TreeNode *sortedArrayToBST(vector<int> &a) {
    return f(a, 0, a.size());
  }
  TreeNode *f(vector<int> &a, int l, int h) {
    if (l == h) return NULL;
    int m = l+h >> 1;
    TreeNod