// Making A Large Island
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
  vector<int> uf;
  int f(int x) {
    while (uf[x] > 0)
      uf[x] = uf[uf[x]] > 0 ? uf[uf[x]] : uf[x], x = uf[x];
    return x;
  }
public:
  int largestIsland(vector<vector<int>>& g) {
    int m = g.size(), n = g[0].size();
    uf.assign(m*n+1, 0);
    REP(i, m)
      REP(j, n)
        if (g[i][j]) {
          int x = -1, y;
          if (j && g[i][j-1]) {
            x = f(i*n+j);
            uf[x]--;
          } else
            x = -1;
          uf[i*n+j+1] 