// Range Sum Query - Mutable
class NumArray {
  vector<int> a;
public:
  NumArray(vector<int> &nums) {
    a = nums;
    for (int i = 0; i < nums.size(); i++) {
      int j = i | i+1;
      if (j < nums.size())
        a[j] += a[i];
    }
  }

  void update(int i, int val) {
    val -= sumRange(i, i);
    for (; i < a.size(); i |= i+1)
      a[i] += val;
  }

  int sumRange(int i, int j) {
    int s = 0;
    for (j++; i != j; ) {
      if (i < j) {
        s += a[j-1];
  