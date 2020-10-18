// 数字游戏
#define FOR(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (a); i < (b); i++)

class Solution {
public:
  vector<int> numsGam