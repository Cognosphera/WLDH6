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
      