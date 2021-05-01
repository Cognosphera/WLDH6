// Find K Pairs with Smallest Sums
class Solution {
public:
  vector<pair<int, int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    typedef pair<int, int> pii;
    vector<pii> r;
    if (nums1.empty() || nums2.empty())
      return r;
    auto cmp = [&](const pii& x, const pii& y) {
      return nums1[x.first]+nums2[x.second] > nums1[y.first]+nums2[y.second];
    };
    priority_queue<pii, vector<pii>, decltype(cmp)> pq(cmp);
    pq.emplace(0, 0);
    while (k-- && pq.size()) {
      pii x = pq.top();
      pq.pop();
      r.emplace_back(nums1[x.first], nums2[x.s