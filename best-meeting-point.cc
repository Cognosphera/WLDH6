// Best Meeting Point
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int minTotalDistance(vector<vector<int>>& grid) {
    vector<int> xs, ys;
    REP(i, grid.size())
      REP(j, grid[0].size())
      if (grid[i][j]) {
        x