// Fair Candy Swap
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
    int d = accumulate(ALL(B), 0) - accumulate(ALL(A), 0) >> 1;
    unordered_set<i