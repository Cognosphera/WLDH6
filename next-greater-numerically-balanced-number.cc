// Next Greater Numerically Balanced Number
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
public:
  int nextBeautifulNumber(int n) {
    int a[9] = {}, c[10] = {}, m = 0;
    for (int i = n; i; i /= 10)
      c[a[m++] = i%10]++;
    for(;;) {
      n++;
      int i = 0;
      for (; ; i++) {
        if (i < m)
          c[a[i]]--;
        else
          m++;
        if (a[i] < 9) {
          c[++a[i]]++;
          i++;
