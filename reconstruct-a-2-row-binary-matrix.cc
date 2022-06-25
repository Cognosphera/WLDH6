// Reconstruct a 2-Row Binary Matrix
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
    int n = colsum.size();
    vector<vector<int>> a(2, vector<int>(n));
    int one = 0;
    REP(i, colsum.size()) {
      int x = colsum[i];
      if (x==2) a[0][i] = a[1][i] = 1, upper--, lower--;
      el