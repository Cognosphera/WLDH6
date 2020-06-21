// Add Edges to Make Degrees of All Nodes Even
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
public:
  bool isPossible(int n, vector<vector<int>>& edges) {
    vector<int> d(n);
    vector<unordered_set<int>> es(n);
    for (auto &e : edges) {
      d[--e[0]]++;
      d[--e[1]]++;
      es[e[0]].insert(e[1]);
      es[e[1]].insert(e[0]);
    }
    int odd = 0;
    vector<int> vs;
    REP(i, n)
      if (d[i]&1)
        odd++, vs.push_back(i);
    if (odd == 0) return true;
    if (odd > 4) return false;

    aut