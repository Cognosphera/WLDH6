// Minimum Cost to Make at Least One Valid Path in a Grid
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
  static constexpr int dir[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
public:
  int minCost(vector<vector<int>> &g) {
    int m