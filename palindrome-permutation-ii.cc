// Palindrome Permutation II
class Solution {
public:
  vector<string> generatePalindromes(string s) {
    int c[127] = {};
    for (auto x: s)
      c[x]++;
    vector<string> r;
    if (count_if(c, c+127, bind(modulus<int>(), placeholders::_1, 2)) == s.size() % 2) {
      int n = s.size();
      auto it = s.begin();
      for (int i = 0; i < 127; i++) {
        fill_n(it, c[i]/2, i);
        it += 