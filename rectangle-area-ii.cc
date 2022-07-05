// Rectangle Area II
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  int n;
  vector<int> tag, sum, xs;
  void mconcat(int i, int k) {
    i >>= 1, k <<= 1;
    int j = i*k-n;
    sum[i] = tag[i] ? xs[j+k]-xs[j] : i < n ? sum[i*2]+sum[i*2+1] : 0;
  }
  void apply(int i, int k, int v) {
    int j = i*k-n;
    tag[i] += v;
    sum[i] = tag[i] ? xs[j+k]-xs[j] : i < n ? sum[i*2]+sum[i*2+1] : 0;
  }
  void modify(int l, int r, int v) {
    l += n-1, r += n;
    bool lf = false, rf = false;
    int k = 1;
    for (; l^r^1; l >>= 1, r >>= 1, k <<= 1) {
      if (~l&1) apply(l^1, k, v), lf = true;
      if (r&1) apply(r^1, k, v), rf = true;
      if (lf && l > 1) mconcat(l, k);
      if (rf) mconcat(r, k);
    }
    for (; l > 1; l >>= 1, k <<= 1)
      mconcat(l, k);
  }
  int get_sum(in