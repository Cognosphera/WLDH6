// Permutation Sequence
#define ROF(i, a, b) for (int i = (b); --i >= (a); )

class Solution {
public:
  string getPermutation(int n, int k) {
    int f[] = {1,1,2,6,24,