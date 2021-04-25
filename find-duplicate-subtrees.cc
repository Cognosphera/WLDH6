// Find Duplicate Subtrees
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  static const int K = 501, K2 = K/2;
  static const long P = 1000000007;
  vector<int> a;
  vector<long> h, pw;
  vector<tuple<TreeNode *, int, int>> ranges;
  long inv(long x) {
    long s = 1;
    for (; x > 1; x = P%x)
      s = s*(P-P/x)%P;
    return s;
  }
  void dfs(TreeNode *x) {
    int l = a.size();
    a.push_back(x->val+K2);
    if (x->left) dfs(x->left);
    a.push_back(K-1);
    if (x->right) dfs(x->right);
    a.push_back(K-1);
    ranges.emplace_back(x, l, a.size());
  }
  vector<TreeNode *> findDuplicateSubtrees(TreeNode *root) {
    *this = {};
    dfs(root);
    h.resize(a.size()+1);
    pw.resize(a.size());
    long pow = 1;
    REP(i, a.size()) {
      pw[i