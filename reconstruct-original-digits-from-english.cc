// Reconstruct Original Digits from English
class Solution {
public:
  string originalDigits(string s) {
    int c[127] = {}, a[10];
    for (char i: s)
      c[i