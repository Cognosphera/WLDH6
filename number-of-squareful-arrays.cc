// Number of Squareful Arrays
#define ALL(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int numSquarefulPerms(vector<int>& A) {
    int n = A.size(), nn = 1<<n;
    if (n == 1) {
      int q = sqrt(A[0]);
      return q*q == A[0];
    }
    vector<vector<char>> g(n, vect