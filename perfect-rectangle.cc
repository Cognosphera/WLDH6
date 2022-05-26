// Perfect Rectangle
namespace std {
template<>
  struct hash<pair<int, int>> {
    size_t operator()(const pair<int, int>& x) const {
      return size_t(x.first) << 32 | x.second;
    }
  };
};

class Solution {
public:
  bool isRectangleCover(vector<vector<int>>& rectangles) {
    int x0 = INT_MAX, x1 = INT_MIN, y0 = INT_MAX, y1 = INT_MIN;
    unordered_map<pair<int, int>, int> m;
    for (auto& a: rectangles) {
      x0 = min(x0, a[0]);
      y0 = min(y0, a[1]);
      x1 = max(x1, a[2]);
      y1 = max(y1, a[3]);
      int& m1 = m[make_pair(a[0], a[1])]; if (m1 & 1) return false; m1 |= 1;
      int& m2 = m[make_pair(a[0], a[3])]; if (m2 & 2) return false; m2 |= 2;
      int& m4 = m[make_pair(a[2], a[3])]; if (m4 & 4) return false; m4 |= 4;
      int& m8 = m[make_pair(a[2], a[1])]; if (m8 & 8) return false; m8 |= 8;
    }
    for (auto& i: m) {
      int x, y, mask = i.second;
      tie(x, y) = i.first;
      if ((x == x0 || x == x1) && (y == y0 || y == y1)) {
        if (__builtin_popcount(mask) != 1)
          return false;
      } else {
        if (mask != 3 && mask != 6 && mask != 12 && mask != 9 && mask != 15)
          return false;
      }
    }
    return true;
  }
};

/// sweep line

class Solution {
public:
  bool isRectangleCover(vector<vector<int>>& rectangles) {
    long area = 0, x0 = INT_MAX, x1 = INT_MIN, y0 = INT_MAX, y1 = INT_MIN