// Maximum Sum of Two Non-Overlapping Subarrays
class Solution {
public:
  int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
    int n = A.size(), r = 0;
    vector<int> s(n+1);
    for (int i = 0; i < n; i++)
      s[i+1] = s[i]+A[i];
    for (int _ = 2; _--; swap(L, M)) {
      int m = 0;
     