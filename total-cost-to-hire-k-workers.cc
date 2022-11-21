// Total Cost to Hire K Workers
#define REP(i, n) for (long i = 0; i < (n); i++)
using pii = pair<int, int>;

class Solution {
public:
  long long totalCost(vector<int>& a, int k, int can) {
    int n = a.size(), l = can, r = n-can;
    long res = 0;
    set<pii> s;
    REP(i, can)
      s.emplace(a[i], i), s.emplace(a[n-1-i], n-1-i);