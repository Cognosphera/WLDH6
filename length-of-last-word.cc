// Length of Last Word
class Solution {
public:
  int lengthOfLastWord(string a) {
    const char *s = a.c_str();
    int l = 0;
    while (*s) {
      if (*