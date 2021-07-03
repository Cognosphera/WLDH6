// Insert Delete GetRandom O(1)
class RandomizedSet {
  unordered_map<int, int> m;
  vector<int> a;
public:
  /** Initialize your data structure here. */
  RandomizedSet() {
  }

  /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
  bool insert(int val) {
    if (! m.empl