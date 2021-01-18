// Count The Repetitions
class Solution {
public:
  int getMaxRepetitions(string s1, int n1, string s2, int n2) {
    int l1 = s1.size(), l2 = s2.size(), c = 0, lo = -1, hi;
    vector<int> offset(l2+1, 0), cnt(l2+1);
    for (int i = 1, o = 0; i <= n1; i++) {
      for (int j = 0; j < l1; j++)
        if (s1[j] == s2[o] && ++o == l2) {
          o = 0;
          c++;
        }
      for (int j = 0; j < i; j++)
        if (o == offset[j]) {
          lo = j;
          hi = i;
          goto out;
        }
      offset[i] = o;
      cnt[i] = c;
    }
out:
    if (lo < 0) return c/n2;
    return ((n1-lo)/(hi-lo)*(c-cnt[lo]) + cnt[lo+(n1-lo)%(hi-lo)]) / n2;
  }
};

///

#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i