// Design Tic-Tac-Toe
class TicTacToe {
  vector<vector<int8_t>> a;
  int n;
  bool diagonal(int row, int col) {
    if (row != col && row != n-1-col)
      return false;
    int lc = 0, rc = 0;
    for (int i = 0; i < n; i++) {
      lc += a[i][i] == a[row][col];
      rc += a[i][n-1-i] == a[row][col];
    }
    return lc == n || rc == n;
  }
public:
  /** Initiali