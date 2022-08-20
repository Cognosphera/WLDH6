// Smallest Missing Genetic Value in Each Subtree
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
  vector<vector<int>> es;
  vector<int> pre, post;
  int tick = 0;
  void dfs(int u) {
    pre[u] = tick++;
    for (int v : es[u])
      dfs(v);
    post[u] = tick;
  }
public:
  vector<int> smallestMissingValu