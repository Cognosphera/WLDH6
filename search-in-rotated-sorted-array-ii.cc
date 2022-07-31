// Search in Rotated Sorted Array II

class Solution {
public:
  bool search(vector<int> &a, int target) {
    int l = 0, h = a.size();
    while (l < h) {
      while (l+1 < h && a[l] == a[l+1])
        l++;
      int m = l+h >> 1;
      if (a[m] < target) {
        if (target < a[l] || a[l] < a[m])
          l = m+1;
        else
          h = m;
      } else if (a[m] > target) {
        if (a[l] <= target || a[l] >= a[m])
          h = m;
        else
          l =