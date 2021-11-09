// Maximum Number of Achievable Transfer Requests
// cycle cancelling with Bellman-Ford algorithm, O(n^2*m)
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
  struct Arc { int v, c, w, next; };
public:
  int maximumRequests(int n, vector<vector<int>>& reqs) {
    vector<char> vis(n);
    vector<int> d(n), head(n, -1), pred(n);
    vector<Arc> es;
    int cost = 0;
    for (auto &r: reqs) {
      es.push_back({r[1], 1, -1, head[r[0]]});
      head[r