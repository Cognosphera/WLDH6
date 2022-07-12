// Regular Expression Matching
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
private:
  struct State {
    int c;
    bool epsf, epsb;
    State() : c(-2), epsf(false), epsb(false) {}
  };
public:
  bool isMatch(const char *s, const char *p) {
    vector<State> states(1);
    while (*p) {
      states.back().c = *p == '.' ? -1 : *p;
      states.emplace_back();
      if (*++p == '*') {
        states.back().epsb = true;
        states[states.size()-2].epsf = true