// Minimum Difference in Sums After Removal of Elements
#define ALL(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (long i = (a); i < (b); i++)
#define ROF(i, a, b) for (long i = (b); --i >= (a); )

class Solution {
public:
  long long minimumDifference(vector<int>& a) {
    int n = a.size()/3;
    vector<long> l(n+1), r(n+1);
    vector<int> heap(a.begin(), a.begin()+n);
    make_heap(ALL(heap));
    long sum = accumulate(ALL(heap), 0L);
    l[0] = sum;
    FOR(i, n, 2*n) {
      if (a[i] < heap[0]) {
        sum = sum-heap[0]+a[i];
        pop_heap(ALL(hea