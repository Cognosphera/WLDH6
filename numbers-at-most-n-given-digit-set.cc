// Numbers At Most N Given Digit Set
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  int atMostNGivenDigitSet(vector<string>& D, int N) {
    long c = 1, r = 0, s = 0, ss = 1;
    vector<int> ds;
    transform(ALL(D), back_inserter(ds), [](auto& x) { return stoi(x); });
    for(;;) {
      int n = N%10;
      s = 0;
