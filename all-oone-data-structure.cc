// All O`one Data Structure
class AllOne {
  struct Bucket { int v; unordered_set<string> ks; };
  unordered_map<string, list<Bucket>::iterator> a;
  list<Bucket> b;
public:
  /** Initialize your data structure here. */
  AllOne() {
    b.push_fron