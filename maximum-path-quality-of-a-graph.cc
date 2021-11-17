// Maximum Path Quality of a Graph
using pii = pair<int, int>;

class Solution {
  vector<vector<pii>> es;
  vector<int> values, cnt;
  int ans = 0;
public:
  void dfs(int tim, int u, int val) {
    if (!cnt[u]++)
      val += values[u];
    if (u == 0)
      ans = max(ans, v