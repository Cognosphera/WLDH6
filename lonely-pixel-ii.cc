#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int findBlackPixel(vector<vector<char>>& a, int k) {
    if (a.empty()) return 0;
    int s = 0, m = a.size(), n = a[0].size();
    vector<int> r(m), c(n);
    REP(i, m)
      REP(j, n) {
        r[i] += a[i][j] == 'B';
        c[j] += a[i][j] == 'B';
      }
    REP(j, n)
    