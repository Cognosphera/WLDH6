// Check If Word Is Valid After Substitutions
class Solution {
public:
  bool isValid(string S) {
    int n = 0;
    for (char c: S)
      if (c != 'c')
        S[n++] = c;
