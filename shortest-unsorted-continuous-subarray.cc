// Shortest Unsorted Continuous Subarray
class Solution {
public:
  int findUnsortedSubarray(vector<int>& a) {
    vector<int> b = a;
    sort(b.begin(), b.end());
    int l = 0, r = a.size();
    while (l < r && a[l] == b[l]) l++;
    while (l < r && a[r-1] == b[r-1]) r--;
    return r-l;
  }
};

/// O(n)

class Solution {
public:
  int findUnsortedSubarray(vector<int>& a) {
    int s = 0, l = 0, r = a.size();
    while (l+1 < a.size() && a[l] <= a[l+1]) l++;
    w