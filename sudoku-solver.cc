// Sudoku Solver
/// exact cover problem
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
private:
  static const int N = 9, MAXC = N*N*4, M = MAXC+1+N*N*N*4;
  int L[M], R[M], U[M], D[M], col[M], size[M], mean[M];
  vo