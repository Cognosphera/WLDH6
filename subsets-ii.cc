// Subsets II
#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<vector<int> > subsetsWithDup(vector<int> &S) {
    vector<vector<int> > r;
    vector<int> a;
    sort(S.begin(), S.end());
    REP(i, 1 << S.size()) {
      a.clear();
      REP(j, S.size())
        if (i & 1<<j)
          if (j &