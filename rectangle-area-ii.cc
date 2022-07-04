// Rectangle Area II
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  int n;
  vector<int> tag, sum, xs;
  void mconcat(int i, int k) {
    i >>= 1, k <<= 1;
    int j = i*k-n;
    sum[i] = tag[i] ? xs[j+k]-xs[j] : i < n ? sum[i*2]+sum[i*2+1]