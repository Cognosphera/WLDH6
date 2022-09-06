// Spiral Matrix
#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, a, b) for (decltype(b) i = (b); --i >= (a); )

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int> > &a) {
    vector<int> r;
    if (a.empty() || a[0].empty()) return r;
    int m = a.size(), n = a[0].size();
    int c = 1;
    REP(i, (min(m,n)+1)/2) {
