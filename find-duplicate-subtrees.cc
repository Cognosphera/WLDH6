// Find Duplicate Subtrees
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  static const int K = 501, K2 = K/2;
  static const long P = 1000000007;
  vector<int> a;
  vector<long> h, pw;
  vector<tuple<TreeNod