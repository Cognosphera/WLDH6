// 魔术排列
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  bool isMagic(vector<int>& target) {
    int n = target.size(), r = -1;
    vecto