// Base 7
class Solution {
public:
  string convertToBase7(int num) {
    if (num < 0) return '-'+convertToBase7(-num);
    string r;
    do r.push_back(