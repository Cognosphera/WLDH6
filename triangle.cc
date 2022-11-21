// Triangle
#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int minimumTotal(vector<vector<int> > &a) {
    FOR(i, 1, a.si