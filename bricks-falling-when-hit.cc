// Bricks Falling When Hit
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
  static constexpr int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
  int m, n, num = 0;
public:
  void dfs(vector<vector<int>> &g, int x, int y) {
    g[x][y] = 2;
    num++;
    REP(i, 4) {
      unsigned x1 = x+dx[i], y1 = y+dy[i];
      if (x1 < m && y1 < n && g[x1][y1] == 1)
        dfs(g, x1, y1);
    }
  }
  vector<int> hitBricks(vector<vector<int>> &g, vector<vector<int>> &hits) {
    vector<int> ans(hits.size())