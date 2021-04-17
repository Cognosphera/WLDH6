// Find Common Characters
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  vector<string> commonChars(vector<string>& A) {
    int r[26], c[26];
    fill_n(r, 26, INT_MAX);
    for 