// Divide Nodes Into the Maximum Number of Groups
// bipartite graph & floodfill
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
public:
  vector<int> color;
  vector<vector<int>> es;
  int magnificentSets(int n, vector<vector