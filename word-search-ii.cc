// Word Search II
#define REP(i, n) FOR(i, 0, n)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

class Solution {
  class TrieNode {
  public:
    int id;
    TrieNode *c[26];
    TrieNode() : id(-1) {
      fill_n(c, 26, nullptr);
    }
  } *root;

  