// Sliding Window Median
class Solution {
public:
  vector<double> medianSlidingWindow(vector<int>& nums, int k) {
    vector<double> r;
    multiset<int> a(nums.begin(), nums.begin()+k);
    auto mid = next(a.begin(), (k-1)/2);
    for (int i = k; ; i++) {
      r.push_back((double(*mid)+*next(mid, 1-k%2))/2);
      if (i == nums.size()) break;
      a.insert(nums[i]);
      if (nums[i] < *mid) --mid;
      if (nums[i-k] <= *mid) ++mid;
      a.erase(a.lower_bound(nums[i-k]));
    }
    return r;
  }
};
///
class Solution {
  vector<int> fenwick;
  void add(int x, int n, int v) {
    for (; x < n; x |= x+1)
      fenwick[x] += v;
  }
  int select(int k, int n) {
