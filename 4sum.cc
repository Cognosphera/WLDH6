// 4Sum
class Solution {
public:
  vector<vector<int> > fourSum(vector<int> &a, int target) {
    int n = a.size(), old;
    multimap<int, int> m;
    vector<vector<int>> r;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ) {
      // a <= b < c <= d
      for (int j = i+1; j < n; ) {
        int t = target-a[i]-a[j];
        auto it = m.equal_range(t);
        for (; it.first != it.second; ++it.first) {
          vector<int> b{it.first->second, t-it.first->second, a[i], a[j]};
          r.push_back(b);
        }
        old = a[j];
        while (++j < n && a[j] == old);
      }
      /