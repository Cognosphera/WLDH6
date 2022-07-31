// Satisfiability of Equality Equations
class Solution {
public:
  bool equationsPossible(vector<string> &equations) {
    int p[26];
    iota(p, p + 26, 0);
    auto f = [&](int x) {
      while (p[x] != x)
        p[x] = p[p[x]], x = p[x];
      return x;
    };
    for (auto &eq : equations)
