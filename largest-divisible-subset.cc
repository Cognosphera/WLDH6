// Largest Divisible Subset
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<int> largestDivisibleSubset(vector<int>& nums) {
    vector<pair<int, int>> dp(nums.size());
    s