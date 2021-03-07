
// Delete Duplicate Folders in System
#define ALL(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  static const long P = 1000000007;
  long inv(long x) {
    long s = 1;
    for (; x > 1; x = P%x)
      s = s*(P-P/x)%P;
    return s;
  }
  vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
    sort(ALL(paths));
    unordered_map<string, int> code;
    unordered_map<int, string> name;
    vector<int> a, cur;
    vector<pair<int, int>> ranges;
    for (auto &path: paths) {
      auto res = code.try_emplace(path.back(), code.size()+1);
      int tail = res.first->second;
      if (res.second)
        name.try_emplace(tail, path.back());
      for (; cur.size() && (cur.size() > path.size() || cur.size() == path.size() && a[cur.back()] != tail); cur.pop_back()) {