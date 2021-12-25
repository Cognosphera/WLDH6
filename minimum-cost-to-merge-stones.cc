// Minimum Cost to Merge Stones
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (b); --i >= (a); )

class Solution {
public:
  int mergeStones(vector<int>& a, int K) {
    int n = a.size();
    if ((n-1)%(K-1)) return -1;
    vector<int> sum(n+1