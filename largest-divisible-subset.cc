// Largest Divisible Subset
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<int> largestDivisibleSubset(vector<int>& nums) {
    vector<pair<int, int>> dp(nums.size());
    sort(nums.begin(), nums.end());
    int x = -1, s = 0;
    REP(i, nums.size()) {
      dp[i] = {1, -1};
      REP(j, i)
        if (nums[i] % nums[j] == 0 && dp[j].first + 1 > dp[i].first)
          dp[i] = {dp[j].first + 1, j};
      if (dp[i].first > s)
        s = dp[i].first, x = i;
    }
    vector<int> r;
    for (; x >= 0; x = dp[x].second)
      r.push_back(nums[x]);
    return r;
  }
};

///

class Solution {
public:
  vector<int> largestDivisibleSubset(vector<int>& nums) {
    unordered_map<int, pair<int, int>> dp;
    sort(nums.beg