// Reconstruct Itinerary
/// Hierholzer's algorithm (lexicographical order)

class Solution {
  unordered_map<string, vector<string>> m;
  vector<string> ret;
  void hierholzer(string x) {
    while (! m[x].empty()) {
      string y = m[x].back();
      m[x].pop_back();
      hierholzer(y);
    }
    ret.push_back(x);
  }
public:
  vector<string> findItinerary(vector<vector<string>> &tickets) {
    sort(tickets.begin(), tickets.end(), greater<>());
    for (auto &x: tickets)
      m[x[0]].push_back(x[1]);
    hierholzer("JFK");
    reverse(ret.begin(), ret.end());
    return ret;
  }
};

/// non-recursive Hierholzer's algorithm

class Solution {
public:
  vector<string> findItinerary(vector<vector<string>> &tickets) {
    sort(tickets.begin(), tickets.end(), greater<>());
    unordered_map<string, vector<string>> m;