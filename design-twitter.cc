// Design Twitter
class Twitter {
  unordered_map<int, unordered_set<int>> follows;
  unordered_map<int, vector<pair<int, int>>> tweets;
  int tick = 0;
public:
  /** Initialize your data structure here. */
  Twitter() {

  }

  /** Compose a new tweet. */
  void postTweet(int userId, int tweetId) {
    tweets[userId].emplace_back(tick++, tweetId);
  }

  /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
  vector<int> getNewsFeed(int userId) {
    typedef vector<pair<int, int>>::reverse_iterator it;
    auto cmp = [](const pair<it, it>& x, const pair<it, it>& y) {
      return x.first->first < y.first->first;
    };
    vector<pair<it, it>>