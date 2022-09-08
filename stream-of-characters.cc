// Stream of Characters
class StreamChecker {
  struct Node { int c[26], pi, end; } *pool, *allo, *x;
  int sz;
public:
  StreamChecker(vector<string> &words) {
    sz = 1;
    pool = (Node*)malloc(sizeof(Node));
    allo = pool;
    memset(allo++, 0, sizeof(Node));
    for (auto &w: words) {
      Node *x = pool;
      for (char c: w) {
        if (!x->c[c-'a']) {
          if (allo-pool >= sz) {
            sz *= 2;
            auto pool2 = (Node*)realloc(pool, sizeof(Node)*sz);
            x = x-pool + pool2;
            al