// Search a 2D Matrix II
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &a, int x) {
    if (a.empty() || a[0].empty()) return false;
    return f(a, 0, a.size(), 0, a[0].size(), x);
  }
  bool f(vector<vector<int>> &a, int u, int uu, int v, int vv, int x) {
    if (u >= uu || v >= vv) return false;
    if (uu-u > vv-v) {
      int q = (v+vv)/2, l = u, h = uu;
      while (l < h) {
        int m = (l+h)/2;
        if (a[m][q] < x) l = m+1;
        else h = m;
      }
      if (l < uu && a[l][q] == x) return true;
   