// Anagrams
class Solution {
public:
  vector<string> anagrams(vector<string> &strs) {
    map<string, int> c;
    map<string, string> p;
    vector<string> r;
    for (auto s: strs) {
      string ss = s;
      sort(ss.begin(), ss.end());
      if (c.count(ss)) {
        