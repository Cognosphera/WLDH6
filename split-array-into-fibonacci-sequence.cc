// Split Array into Fibonacci Sequence
#define ALL(x) (x).begin(), (x).end()
#define ROF(i, a, b) for (remove_cv<remove_reference<decltype(b)>::type>::type i = (b); --i >= (a); )

class Solution {
public:
  vector<int> splitIntoFibonacci(string S) {
    int n = S.s