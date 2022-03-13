
// Number of Closed Islands
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int closedIsland(vector<vector<int>>& a) {
    const int dx[] = {0,-1,0,1};