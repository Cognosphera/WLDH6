// Different Ways to Add Parentheses
#define REP(i, n) FOR(i, 0, n)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b); --i >= (a); )

class Solution {
public:
  vector<int> diffWaysToCompute(string input) {
    vector<int> nums;
    vector<char> ops;
    for (int j = 0, i = 0; i < input.size(); i = j) {
      int x = 0;
      for (; j < input.size() && isdigit(input[j]); j++)
        x = x*10+input[j]-'0';
      nums.push_back(x);
      if (j < input.size())
        ops.push_back(input[j++]);
    }
    int n = nums.size();
    vector<vector<vector<int>>> s(n, vector<vector<int>>(n));
    REP(i, n)
      s[i][i].push_back(nums[i]);
    ROF(i, 0, n)
   