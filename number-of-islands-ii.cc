// Number of Islands II
class Solution {
  int find(vector<int> &djs, int x) {
    while (djs[x] >= 0) {
      if (djs[djs[x]] >= 0)
        djs[x] = djs[djs[x]];
      x = djs[x];
    }
    return x;
  }
public:
  vector<int> numIslands2(int m, int n, vector<pair<int, int>>& positions) {
    map<int, int> mp;
    vector<int> djs(positions.size(), -1);
    int cnt = 0;
    vector<int> ret;
    for (auto &pos: positions) {
      