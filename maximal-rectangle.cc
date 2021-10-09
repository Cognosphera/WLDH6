// Maximal Rectangle
// 秋叶拓哉（iwi）、岩田阳一（wata）和北川宜稔（kita_masa）所著，巫泽俊（watashi）、庄俊元（navi）和李津羽（itsuhane）翻译的《挑战程序设计竞赛》

#define ROF(i, a, b) for (int i = (b); --i >= (a); )
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
public:
  int maximalRectangle(vector<vector<char> > &a) {
    if (a.empty()) return 0;
    int m = a.size(), n = a[0].size(), ans = 0;
    vector<int> h(n, 0), l(n, 0), r(n, n-1);
    REP(i, m) {
      int ll = 0, rr = n-1;
      REP(j, n)
        if (a[i][j] == '1')
          l[j] = max(l[j], ll);
        else {
          l[j] = 0;
          ll = j+1;
        }
      ROF(j, 0, n)
        if (a[i][j] == '1') {
          h[j]++;
          r[j] = min(r[j], rr);
          ans = max(ans, (r[j]-l[j]+1)*h[j]);
        } else {
          h[j] = 0;
          r[j] = n-1;
          rr = j-1;
        }
    }
    return ans;
  }
};

// 潘宇超 2008

#define ROF(i, a, b) for (int i = (b); --i >= (a); )
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
public:
  int maximalRectangle(vector<vector<char> > &a) {
    if (a.empty()) return 0;
    int m = a.size(), n = a[0].size(), ans = 0;
    vector<int> h(n), l(n), r(n, n-1);
    REP(i, m) {
      REP(j, n) {
        h[j] = a[i][j] == '1' ? h[j]+1 : 0;
        l[j] = j;
        while (l[j] && h[l[j]-1] >= h[j])
          l[j] = l[l[j]-1];
      }
      ROF(j, 0, n) {
        r[j] = j;
        while (r[j]+1 < n && h[j] <= h[r[j]+1])
          r[j] = r[r[j]+1];
        ans = max(ans, (r[j]-l[j]+1)*h[j]);
      }
    }
  