// Range Addition
class Solution {
public:
  vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
    vector<int> a(length);
    auto f = [&](int x, int y) {
      for (; x < a.size(); x |= x+1)
        a[x] += y;
    };
    for (