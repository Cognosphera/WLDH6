// Minimum Moves to Move a Box to Their Target Location
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

int vis[20][20][20];

class Solution {
public:
  int minPushBox(vector<vector<char>>& grid) {
    using pii = pair<int, int>;
    using state = pair<pii, pii>;
    int n = grid.size(), m = grid[0].size();
    pii src, box, tar;
    const int dirs[][2] = {{0,-1},{-1,0},{0,1},{1,0}};
    REP(i, n) REP(j, m)
      switch (grid[i][j]) {
      case 'S': src = {i, j}; break;
      case 'B': box = {i, j}; break;
      case 'T': tar = {i, j}; break;
      }
    memset(vis, 0, sizeof vis);
    deque<state> q;
    q.push_back({src, box});
    vis[src.first][src.second][box