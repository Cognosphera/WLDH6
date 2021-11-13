// Maximum Number of Non-overlapping Palindrome Substrings
#define REP(i, n) for (long i = 0; i < (n); i++)
#define ROF(i, a, b) for (long i = (b); --i >= (a); )

class Solution {
public:
  int maxPalindromes(string s, int k) {
    int n = s.size();
    vector is(n, vector<char>(n));
    vector<int> f(n+1);
    REP(i, n) {
      is[i][i] = 1;
      ROF(j, 0, i)
        is[j][i] = (j+1 == i || is[j+1][i-1]) && s[j] == s[i];
      f[i+1] = max(f[i+1], f[i]);
      ROF(j, 0, i-k+2)
        if (is[j][i])
          f[i+1] = max(f[i+1], f[j]+1);
    }
    return f[n];
  }
};

/// Manacher's algorithm

class Solution {
public:
  int maxPalindromes(string s, int k) {
    int n = s.size(), m = 2*n+1;
    string a(m, '.');
    for (int i = 0; i < n; i++)
      a[2*i+1] = s[i];
    vector r(m, 0), f(n+1, 0);
    for (int f, g = 0, i = 0; i < m; i++)
      if (i < g && r[2*f-i] != g-i)
        r[i] = min(r[2*f-i], g-i);
      else {
        f = i;
        g = max(g, i);
        for (; g < m && 2*f >= g && a[2*f-g] == a[g]; g++);
        r[i] = g-f;
      }
    for (int i = k; i <= n; i++)
      f[i] = max({f[i-1], r[2*i-k] >= k+1 ? f[i-k]+1 : 0, r[2*i-k-1] >= k+2 ? f[i-k-1]+1 : 0});
    return f[n];
  }
};

/// Manacher's algorithm (wit