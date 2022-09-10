// String to Integer (atoi)
class Solution {
public:
  int atoi(const char *p) {
    bool neg = false;
    int r = 0;
    while (*p && isspace(*p)) p++;
    if (*p == '+')
      p++;
    else if (*p == '-')
      neg = true, p++;
    for (; *p && isdi