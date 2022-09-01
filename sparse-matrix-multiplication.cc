// Sparse Matrix Multiplication
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
public:
  vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
    int m = A.size(), p = B.size(), n = B[0].size();
   