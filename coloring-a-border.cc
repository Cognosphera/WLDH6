// Coloring A Border
class Solution {
public:
  vector<vector<int>> colorBorder(vector<vector<int>>& a, int r, int c, int color) {
    int n = a.size(), m = a[0].size(), aa = a[r][c];
    vector<vector<char>> v(n, vector<char>(m));
    vector<pair<int,int>> q;
    q.emplace_back(r, c);
    v[r][c] = 1;
    for (int i = 0; i < q.size(); i++) {
      tie(r, c) = q[i];
   