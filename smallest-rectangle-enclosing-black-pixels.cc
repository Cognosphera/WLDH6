// Smallest Rectangle Enclosing Black Pixels
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
  int row(vector<vector<char>> &a, int l, int h, bool flag) {
    while (l < h) {
      int m = l+h >> 1;
      if (!!count(a[m].begin(), a[m].end(), '1') == flag)
        l = m+1;
      else
        h = m;
    }
    return l;
  }
  int column(vector<vector<char>> &a, int l, int h, bool flag) {
    while (l < h) {
      int m = l+h >> 1;
      bool f = false;
      REP(i, a.size())
        if (a[i][m] == '1')
          f = true;
      if (f == flag)
        l = m+1;
      else
        h = m;
    }
    return l;
  }
public:
  int minArea(vector<vector<char>> &a, int x, i