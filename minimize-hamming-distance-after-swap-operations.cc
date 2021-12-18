// Minimize Hamming Distance After Swap Operations
class Solution {
public:
  int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
    struct E { int v, next; };
    int n = source.size(), ret = n, m = allowedSwaps.size(), allo = 0;
    auto es = make_unique<E[]>(m*2);
    vector<int> hd(n, -1), link(n, -1), st;