// Reconstruct Itinerary
/// Hierholzer's algorithm (lexicographical order)

class Solution {
  unordered_map<string, vector<string>> m;
  vector<string> ret;
  void hierholzer(string x) {
    while (! m[x].empty()) {
      string y = m[x].back();
      m[x].pop_back();
  