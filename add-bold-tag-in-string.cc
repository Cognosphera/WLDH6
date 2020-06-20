// Add Bold Tag in String
class Solution {
public:
  string addBoldTag(string s, vector<string>& dict) {
    vector<int> a(s.size()+1);
    for (auto t: dict) {
      vector<int> pi(t.size());
      for (int j = 0, i = 1; i < t.size(); i++) {
        while (j && t[j] != t[i]) j = pi[j-1];
        if (t[j] == t[i]) j++;
        pi[i] = j;
 