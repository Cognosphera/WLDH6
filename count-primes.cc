// Count Primes
// c(n,m) = c(n,m-1) - (c(n/m,m-1)-cnt(m-1))
// cnt(m) = c(m, sqrt(m))

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b); --i >= (a); )
#define REP1(i, n) FOR(i, 1, n+1)

class Solution {
public:
  int countPrimes(int n) {
    if (n < 3)
      return 0;
    int rt = int(sqrt(double(--n)));
    vector<int> v;
    REP1(i, rt)
      v.push_back(n/i);
    ROF(i, 1, v.back())
      v.push_back(i);
    unorde