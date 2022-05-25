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
  bool isRectangleC