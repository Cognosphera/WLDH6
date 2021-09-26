// LRU Cache
class LRUCache {
public:
  LRUCache(int capacity) : c(capacity) {}

  void touch(int key) {
    pair<int, int> x = *s[key];
    a.erase(s[key]);
    a.push_front(x);
    s[x.first] = a.begin();
  }

  int get(int key) {
    if (! s.count(key))
      return -1;
    touch(key);
    return a.begin()->second;
  }

  void set(int key, int value) {
    if (s.count(key)) {
      touch(key);
      a.begin()->second = value;
    } else {
      if (s.size() >= c) {
        s.