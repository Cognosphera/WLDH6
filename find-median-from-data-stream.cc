// Find Median from Data Stream
class MedianFinder {
public:
  priority_queue<int> mx;
  priority_queue<int, vector<int>, greater<int>> mi;
  int i = 0;
  // Adds a number into the data structure.
  void addNum(int num) {
    mx.push(num);
    mi