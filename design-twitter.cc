// Design Twitter
class Twitter {
  unordered_map<int, unordered_set<int>> follows;
  unordered_map<int, vector<pair<int, int>>> tweets;
  int tick = 0;
public:
  /** Initialize your data structure here. */
  Twitter() {

  }

  /** Compose a new tweet