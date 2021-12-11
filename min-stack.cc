// Min Stack
class MinStack {
public:
  MinStack() {}
  void push(int x) {
    a.push(x);
    if (b.empty() || x <= b.top())
      b.push(x);
  }
  void pop() {
    if (b.top() == a.top())
      b.pop();
    a.pop();
  }
  int top() {
    return a.top();
  }
  int get