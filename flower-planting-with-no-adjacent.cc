// Flower Planting With No Adjacent
class Solution {
public:
  vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
    vector<int> g[N], c(N);
    for (auto &p: paths) {
      g[p[0]-1].push_back(p[1]-1);
      g[p[1]-1].push_back(p[0]-1);
    }
    for (int i = 0; i < N; i++)
      if (!c[i]) {
        vector<int>