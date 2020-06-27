// All O`one Data Structure
class AllOne {
  struct Bucket { int v; unordered_set<string> ks; };
  unordered_map<string, list<Bucket>::iterator> a;
  list<Bucket> b;
public:
  /** Initialize your data structure here. */
  AllOne() {
    b.push_front({0, {}});
  }

  /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
  void inc(string key) {
    if (! a.count(key)) {
      a[key] = b.begin();
      b.begin()->ks.insert(key);
    }
    auto y = a[key], x = y++;
    if (y == b.end() || x->v+1 < y->v)
      y = b.insert(y, {x->v+1, {}});
    a[key] = y;
    y->ks.insert(key);
    x->ks.erase(key);
    if (x->ks.empty() && x->v)
      b.erase(x);
  }

  /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
  void dec(string