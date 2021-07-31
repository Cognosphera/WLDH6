// K-Similar Strings
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

constexpr int T = 6;
class Solution {
  string c;
  unordered_map<string, int> memo;
  int f() {
    auto it = memo.find(c);
    if (it != memo.end())
 