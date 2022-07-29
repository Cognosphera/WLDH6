// Reverse Words in a String
class Solution {
public:
    void reverseWords(string &s) {
      size_t i, j = 0;
      for (i = 0; i < s.size(); i++)
        if (s[i] != ' ' || (j && s[j-1] != ' '))
     