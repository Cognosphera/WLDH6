// Magic Squares In Grid
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int numMagicSquaresInside(vector<vector<int>>& a) {
    int n = a.size(), s = 0;
    REP(i, n-2)
      REP(j, n-2) {
        char b[10]