// 3Sum Closest
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
public:
  int threeSumClosest(vector<int> &a, int target) {
    int n = a.size(), opt = INT_MAX, opts;
    sort(a.begin(), a.end());
    REP(i, n) {
      int j = i+1, k = n-1, t = target-a[i];
      while (j < k) {
        if (a[j]+a[k] < t) {
          