// Pacific Atlantic Water Flow
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<pair<int, int>> pacificAtlantic(vector<vector<int>>& matrix) {
    if (matrix.empty())
      return {};
    int m = matrix.size(), n = matrix[0].size();
    queue<pair<int, int>> q;
    vector<vector<char>> a(m, vector<char>(n, 0));
    auto bfs = [&](int b) {
      while (q.size()) {
        int x, y;
        tie(x, y) = q.front();
        q.pop();
        if (x && ! (a[x-1][y] & b) && matrix[x][y] <= matrix[x-1][y])
          a[x-1][y] |= b, q.emplace(x-1, y);
        if (x+1 < m && ! (a[x+1][y] & b) && matrix[x][y] <= matrix[x+1][y])
          a[x+1][y] |= b, q.emplace(x+1, y);
        if (y && ! (a[x][y-1] & b) && matrix[x][y] <= matrix[x][y-1])
          a[x][y-1] |= b, q.emplace(x, y-1);
        if (y+1 < n && ! (a[x][y+1] & b) && matrix[x][y] <= matrix[x][y+1])
          a[x][y+1] |= b, q.emplace(