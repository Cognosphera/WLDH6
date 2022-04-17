// Online Stock Span
class StockSpanner {
  vector<pair<int, int>> s;
public:
  StockSpanner() {}
  int next(int price) {
    int w = 1;
    for (; s.size() && s.back().first <= price; s.pop_back())
      w += 