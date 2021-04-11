// Find All Possible Recipes from Given Supplies
class Solution {
public:
  vector<string> findAllRecipes(vector<string>& r, vector<vector<string>>& in, vector<string>& su) {
    int n = r.size();
    vector<int> d(n);
    unordered_map<string, vector<int>> e;
    for (int i = 0; i < n; i++) {
      d[i] = in[i].size();
      for (auto x: in[i])
        e[x].push_back(i);
    }
    vector<string> q(su), ret;
    unordered_set<string> vis(su.begin(), su.end());
    while (q.size()) {
      a