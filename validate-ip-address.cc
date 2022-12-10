// Validate IP Address
class Solution {
  bool ipv4(string a) {
    int p = 0, t;
    for (int j, i = 0; i < a.size(); i = j+1) {
      for (j = i; j < a.size() && is