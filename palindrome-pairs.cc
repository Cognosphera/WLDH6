// Palindrome Pairs
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
  string a;
  vector<int> z;
  void manacher(int n) {
    z.resize(n);
    z[0] = 1;
    for (int f, g = 1, i = 1; i < n; i++)
      if (i < g && z[2*f-i] != g-i)
        z[i] = min(z[2*f-i], g-i);
      else {
        g = max(g, f = i)