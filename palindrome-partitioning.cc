// Palindrome Partitioning
#define ROF(i, a, b) for (int i = (b); --i >= (a); )
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
private:
  vector<vector<bool>> f;
  vector<string> rr;
  vector<vector<string>> r;
  void g(string &s, int i) {
    if (i == s.size())
      r.push_back(rr);
    else
      REP(j, s.size())
        if (f[i][j]) {
          rr.push_back(s.substr(i, j-i+1));
          g(s, j+1);
          rr.pop_back();
        }
  }
public:
  vector<vector<string>> partition(string s) {
    int n = s.size();
    f.assign(n, vector<bool>(n));
    ROF(i, 0, n) {
      f[i][i] = t