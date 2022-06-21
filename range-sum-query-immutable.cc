// Range Sum Query - Immutable
#define FOR(i, a, b) for (int i = (a); i < (b); i++)

class NumArray {
  vector<int> a;
public:
  NumArray(vector<int> &nums) {
    a = nums;
    FOR(i, 1, a.size())
      a[