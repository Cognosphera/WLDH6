// Sort Transformed Array
class Solution {
public:
  vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {
#define S(x, y) ((x) < (y) ? 1 : (x) > (y) ? 2 : 0)
    if (nums.empty())
      return nums;
    for (auto& x: nums)
      x = (x*a+b)*x+c;
    int i = 1, dir = S(nums[0], nums[1]);
    while (i < nums.size() && (dir |= S(nums[i-1], nums[i])) != 3)
      i++;
    if