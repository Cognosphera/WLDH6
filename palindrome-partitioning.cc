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
      f[i][i] = true;
      if (i+1 < n && s[i] == s[i+1])
        f[i][i+1] = true;
      FOR(j, i+2, n)
        f[i][j] = f[i+1][j-1] && s[i] == s[j];
    }
    r.clear();
    g(s, 0);
    return r;
  }
};

///

#define REP1(i, n) for (remove_cv<remove_reference<decltype(n)>::type>::type i = 1; i <= (n); i++)

class Solution {
private:
  vector<string> r;
  vector<vector<string>> ret;
  string s;
  vector<int> r0, r1;
  void dfs(int i) {
    if (i == s.size()) {
      ret.push_back(r);
      return;
    }
    REP1(j, s.size()-i)
      if ((j%2 ? r1 : r0)[i+j/2] >= (j+1)/2) {
  