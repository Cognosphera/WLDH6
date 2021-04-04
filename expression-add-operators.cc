// Expression Add Operators

/// like Earley parser, O(4^n) (string concatenation treated as O(1))

typedef long long ll;
class Solution {
  string a;
  int n, target;
  vector<string> res;
  void forward(int k, string s, ll add, ll mul, ll last) {
    ll sum = add+mul*last;
    if (k == n) {
      if (sum == target)
        res.push_back(s);
      return;
    }
    int x = a[k]-'0';
    if (last) // no leading zero
      forward(k+1, s+a[k], a