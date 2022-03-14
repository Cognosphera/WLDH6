// Number of Different Subsequences GCDs
class Solution {
public:
  int countDifferentSubsequenceGCDs(vector<int>& nums) {
    int mx = *max_element(nums.begin(), nums.end()), ans = 0;
    v