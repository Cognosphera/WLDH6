// Ugly Number
class Solution {
public:
  bool isUgly(int num) {
    if (num) {
      while (num % 2 == 0) num /= 2;
      while (num % 3 == 0) num /= 3;
    