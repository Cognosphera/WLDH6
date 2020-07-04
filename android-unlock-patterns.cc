// Android Unlock Patterns
class Solution {
  long a[9], r;
  void perm(int k, int m, int n, int used) {
    if (m <= k)
      r++;
    if (k == n)
      return;
    for (int i = k; i < 9; i++) {
      if (k) {
        int x = 10 * min(a[k-1], a[i]) + max(a[k-1], a[i]);
        if (x == 02 && ! (used & 1 << 1) ||
            x == 35 && ! (used & 1 << 4) ||
       