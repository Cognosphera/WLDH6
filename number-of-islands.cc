// Number of Islands
#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int numIslands(vector<vector<char>> &a) {
    if (a.empty()) return 0;
    stack<pair<int, int>> s;
    size_t m = a.size(), n = a[0].size();
    int num = 0;
    REP(i, m)
      REP(j, n)
        if (a[i][j] == '1') {
          num++;
          stack<pair<int, int>> s;
          s.push(make_pair(i, j));
          a[i][j] = 'x';
          while (! s.empty()) {
 