// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int> &a, int s) {
      vector<int> r(a.size());
      iota(r.begin(), r.end(), 0);
      sort(r.begin(), r.end(), [&](int x,