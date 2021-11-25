
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (b); --i >= (a); )

class Solution {
public:
  int maxSumMinProduct(vector<int>& a) {
    long n = a.size(), ans = 0;
    vector<int> l(n), r(n);
    vector<long> s(n+1);
    REP(i, n) {
      int x = i;
      while (x && a[x-1] >= a[i])
        x = l[x-1];
      l[i] = x;
      s[i+1] = s[i]+a[i];