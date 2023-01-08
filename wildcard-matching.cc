// Wildcard Matching
class Solution {
public:
  bool isMatch(const char *s, const char *p) {
    const char *star = NULL, *ss = s;
    while (*s) {
      if (*p == '?' || *p == *s)
        p++, s++;
      else if (*p == '*')
