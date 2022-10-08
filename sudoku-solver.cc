// Sudoku Solver
/// exact cover problem
#define REP(i, n) for (int i = 0; i < (n); i++)

class Solution {
private:
  static const int N = 9, MAXC = N*N*4, M = MAXC+1+N*N*N*4;
  int L[M], R[M], U[M], D[M], col[M], size[M], mean[M];
  void cover(int c) {
    L[R[c]] = L[c];
    R[L[c]] = R[c];
    for (int i = D[c]; i != c; i = D[i])
      for (int j = R[i]; j != i; j = R[j]) {
        U[D[j]] = U[j];
        D[U[j]] = D[j];
      }
  }
  void uncover(int c) {
    for (int i = U[c]; i != c; i = U[i])
      for (int j = L[i]; j != i; j = L[j])
        U[D[j]] = D[U[j]] = j;
    L[R[c]] = R[L[c]] = c;
  }
  void append(int i, int l, int r, int c) {
    L[i] = l; R[i] = r;
    D[U[i] = U[c]] = i;
    U[D[i] = c] = i;
    col[i] = c;
    size[c]++;
  }
  bool dlx(vector<vector<char> > &a) {
    if (R[MAXC] == MAXC)
      return true;
    int c, mins = INT_MAX;
    for (int i = R[MAXC]; i != MAXC; i = R[i])
      if (size[i] < mins)
        mins = size[c = i];
    cover(c);
    for (int i = D[c]; i != c; i = D[i]) {
      for (int j = R[i]; j != i; j = R[j])
        cover(col[j]);
      a[mean[i]/N/N][mean[i]/N%N] = '1'+mean[i]%N;
      if (dlx(a)) return true;
      for (int j = L[i]; j != i; j = L[j])
        uncover(col[j]);
    }
    uncover(c);
    return false;
  }
public:
  void solveSudoku(vector<vector<char> > &a) {
    int cur = MAXC