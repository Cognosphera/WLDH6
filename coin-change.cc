// Coin Change
class Solution {
public:
  int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, -1);
    dp[0] = 0;