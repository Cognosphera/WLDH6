// Bomb Enemy
#define REP(i, n) FOR(i, 0, n)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

class Solution {
public:
  int maxKilledEnemies(vector<vector<char>>& grid) {
    int m = grid.size(), n = m ? grid[0].size() : 0, r = 0, row, col[n];
    REP(i, m)
      REP(j, n) 