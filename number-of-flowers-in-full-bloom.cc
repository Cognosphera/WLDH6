// Number of Flowers in Full Bloom
#define ALL(x) (x).begin(), (x).end()
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
  vector<int> fenwick;
  void add(int n, int x) {
    for (; x < n; x |= x+1)
      fenwick[x]++;
  }
  int getSum(int x) {
    int s = 0;
    for (; x