// Count of Smaller Numbers After Self
// divide and conquer
typedef pair<int, int> pii;
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
  vector<pii> a, b;
  vector<int> c;
  void f(int l, int r) {
    if (r-l <= 1)
      return;
    int m = l+(r-l)/2;
    f(l, m);
    f(m, r);
    for (int i = l, j = m, k = l; i < m || j < r; )
      if (j == r || i < m && a[i].first <= a[j].first) {
        c[a[i].second] += j-m;
        b[k++] = a[i++];
      } else
        b[k++] = a[j++];
    copy(b.begin()+l, b.begin()+r, a.begin()+l);
  }
public:
  vector<int> countSmaller(vector<int>& nums) {
    int n = nums