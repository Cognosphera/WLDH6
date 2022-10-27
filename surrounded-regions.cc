// Surrounded Regions
#define FOR(i, a, b) for (decltype(b) i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  void solve(vector<vector<char>> &a) {
    if (a.empty