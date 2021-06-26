// Insert Delete GetRandom O(1) - Duplicates allowed
class RandomizedCollection {
public:
  unordered_multimap<int, int> m;
  vector<pair<int, decltype(m.begin())>> a;
public:
  /** Initialize your data structure here. */
  RandomizedCollection() {

  }

  /** Inserts a value to the collection. Returns true if the collection did not already contain the specified elemen