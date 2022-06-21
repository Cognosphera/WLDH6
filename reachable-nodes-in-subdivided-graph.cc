// Reachable Nodes In Subdivided Graph
class Solution {
public:
  int reachableNodes(vector<vector<int>>& edges, int M, int N) {
    vector<vector<pair<int,int>>> g(N);
    vector<int> d(N, M+1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<char> vis(N);
    int ans = 0;
    for (auto &r : edges) {
      g[r[0]].emplace_back(r[1], r[2] + 1);
      g[r