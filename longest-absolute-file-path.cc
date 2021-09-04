// Longest Absolute File Path
class Solution {
public:
  int lengthLongestPath(string input) {
    vector<int> st;
    int r = 0;
    for (int j, i = 0; i < input.size(); i = j+1) {
      char dot = 0;
      for (j = i; j < input.size() && input[j] != '\n'; j++)
        dot |= input[j] == '.';
      int t = 0;
      for (; input[i] == '\t'; i++)
     