
// Time to Cross a Bridge
#define ALL(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)
using pii = pair<int, int>;

class Solution {
public:
  int findCrossingTime(int n, int k, vector<vector<int>>& a) {
    REP(i, k)
      a[i].push_back(i);
    sort(ALL(a), [](auto &x, auto &y) {
      int l = x[0]+x[2], r = y[0]+y[2];
      if (l != r) return l > r;
      return x[4] > y[4];
    });