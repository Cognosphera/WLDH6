// Word Break II
class Solution {
  string s;
  vector<string> dict, ans;
  vector<int> parts;
  void dfs(int n) {
    if (n == 0) {
      string ss;
      for (int j = 0, i = parts.size(); i--; ) {
        if (j) ss += ' ';
        ss.insert(ss.size(), &s[j], parts[i]);
        j += parts[i];
      }
      ans.push_back(ss);
    } else
      for (auto &w: dict)
        if (w.size() <= n && s.compa