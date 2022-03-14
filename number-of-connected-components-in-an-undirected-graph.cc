// Number of Connected Components in an Undirected Graph
class Solution {
public:
  int countComponents(int n, vector<pair<int, int>>& edges) {
    vector<int> uf(n, -1);
    auto find = [&](int x) {
      while (uf[x] >= 0) {
        if (uf[uf[x]] >= 0)
          uf[x] = uf[uf[x]];
        x  = uf[x];
   