// Substring with Concatenation of All Words
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
public:
  vector<int> findSubstring(string S, vector<string> &L) {
    map<string, int> ss;
    map<string, int> tt;
    vector<int> r;
    int n = S.size(), m = L[0].size();
    if (m*L.size() > n)
      return r;
    for (auto x: L)
      ++ss[x];
    R