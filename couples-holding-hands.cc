// Couples Holding Hands
class Solution {
public:
  int minSwapsCouples(vector<int>& row) {
    int n = row.size()/2;
    vector<int> uf(n, -1);
    auto find = [&](int x) {
      int r = x, y;
      while (uf[r] >= 0) r = uf[r];
      for (; x != r; x = y) y = uf[x], uf[x] = r;
      return r;
    };
    for (int i = 0; i < 2*n; i += 2) {
      int x = find(row[i]/2), y = find(row[i+1]/2);
      if (x == y) co