// Create Maximum Number
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ROF(i, a, b) for (int i = (b); --i >= (a); )

namespace KoAluru
{
  bool *t;
  int *b;

  template<typename T>
  void bucket(T a[], int n, int k, bool end)
  {
    fill_n(b, k, 0);
    REP(i, n) b[a[i]]++;
    if (end)
      FOR(i, 1, k)
        b[i] += b[i-1];
    else {
      int s = 0;
      REP(i, k)
        s += b[i], b[i] = s-b[i];
    }
  }

  template<typename T>
  void plus_to_minus(T a[], int sa[], int n, int k)
  {
    bucket(a, n, k, false);
    sa[b[a[n-1]]++] = n-1;
    REP(i, n-1) {
      int j = sa[i]-1;
      if (j >= 0 && ! t[j])
        sa[b[a[j]]++] = j;
    }
  }

  template<typename T>
  void minus_to_plus(T a[], int sa[], int n, int k)
  {
    bucket(a,