// Minimum Rounds to Complete All Tasks
#define ALL(x) (x).begin(), (x).end()

class Solution {
public:
  int minimumRounds(vector<int>& a) {
    sort(ALL(a));
    int n = a.size(), s = 0;
    for (int j 