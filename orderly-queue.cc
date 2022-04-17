// Orderly Queue
class Solution {
public:
  string orderlyQueue(string S, int K) {
    if (K > 1)
      sort(S.beg