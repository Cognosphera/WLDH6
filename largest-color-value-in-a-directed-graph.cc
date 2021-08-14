// Largest Color Value in a Directed Graph
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)

class Solution {
public:
  int largestPathValue(string colors, vector<vector<int>>& edges) {
    int n = colors.size(), top = -1, cnt = 0;
    vec