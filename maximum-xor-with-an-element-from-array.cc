#define ALL(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size(), m = queries.size();
    REP(i, m) queries[i].push_back(i);
    sort(