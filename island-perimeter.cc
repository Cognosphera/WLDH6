// Island Perimeter
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int islandPerimeter(vector<vector<int>>& a) {
    int m = a.size(), n = a[0].size(), s = 0;
    REP(i, m