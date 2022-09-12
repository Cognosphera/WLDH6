// Strobogrammatic Number III
class Solution {
  int f(string high, bool inclusive) {
    static const char *qq[] = {"00","11","69","88","96"};
    int c[27], c0[27];
    c[0] = 0; c[1] = 2; c[2] = 4; c[3] = 12;
    for (int i = 4; i < 27; i++)
      c[i] = c[i-2] * 5;
    c0[0] = 1; c0[1] = 3;
    for (int i = 2; i < 27; i++