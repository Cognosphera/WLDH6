// Longest Ideal Subsequence
#define FOR(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) for (long i = 0; i < (n); i++)

class Solution {
public:
  int longestIdealString(string s, int k) {
    int n = s.size();
    array<int, 2