// Check if an Original String Exists Given Two Encoded Strings
const int P = 32768;
struct HNode {int key; bool val; HNode *next; } pool[P*2], *head[P], *allo;

class Solution {
  static const int BASE = 999*10;
  string s1, s2;
  bool f(int i, int j, int p) {
    int key = ((p+BASE)*41+i)*41+j, hash = key%P;
    for (HNode *x = head[hash]; x; x = x->next)
      if (x->key == key)
        return x->val;
    if (s1.size() == i && s2.size() == j) return !p;
    bool ret = false;

    if (unsigned(s1[i]-'0') < 10) {
      int x = 0;
      do {
        x = x*10+s1[i]-'0';
        ret = f(++i, j, p+x);
      } while (!ret && unsigned(s1[i]-'0') < 10);
    } else if