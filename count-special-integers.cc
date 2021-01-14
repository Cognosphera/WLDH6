// Count Special Integers
#define REP(i, n) for (long i = 0; i < (n); i++)
#define ROF(i, a, b) for (long i = (b); --i >= (a); )

class Solution {
public:
  int countSpecialNumbers(int n) {
    int m = 0, a[10], u[10] = {};
    n++;
    do a[m++] = n%