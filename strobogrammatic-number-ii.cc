// Strobogrammatic Number II
class Solution {
  void f(int i, int j, string &s, vector<string> &r) {
    static const char *qq[] = {"00", "11", "69", "88", "96"};
    if (i > j)
      r.push_back(s);
    else
      for (const char *q: qq)
        if (q[0] != '0' || i || i == j) {
        