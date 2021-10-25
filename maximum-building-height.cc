// Maximum Building Height
class Solution {
public:
  int maxBuilding(int n, vector<vector<int>>& res) {
    vector<pair<int, int>> a;
    a.emplace_back(1, 0);
    a.emplace_back(n, n-1);
    for (auto &x: res)
      a.emplace_back(x[0], x[1]);
    sort(a.begin(), a.end());
    int m = a.size(