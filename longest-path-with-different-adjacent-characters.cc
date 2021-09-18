// Longest Path With Different Adjacent Characters
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
  vector<vector<int>> e;
  vector<int> f, g;
  string s;
  void dfs(int u) {
    for (int v: e[u]) {
      d