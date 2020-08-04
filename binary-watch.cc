// Binary Watch
class Solution {
public:
  vector<string> readBinaryWatch(int num) {
    vector<string> r;
    for (int i = 0; i < 12; i++)
      for (int j = 0; j < 60; j++)
        