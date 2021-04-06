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
      forward(k+1, s+a[k], add, mul, last*10+x);
    forward(k+1, s+'*'+a[k], add, mul*last, x);
    forward(k+1, s+'+'+a[k], sum, 1, x);
    forward(k+1, s+'-'+a[k], sum, -1, x);
  }
public:
  vector<string> addOperators(string num, int target) {
    a = num;
    n = a.size();
    if (n) {
      this->target = target;
      forward(1, string(1, a[0]), 0, 1, a[0]-'0');
    }
    return res;
  }
};

/// accelerated by meet-in-the-middle, O(4^(n/2)*2^(n/2)) = O(2^(1.5n))

typedef long long ll;
class Solution {
  string a;
  int n, nn, target;
  vector<multimap<ll, string>> e_plus, e_minus;
  vector<string> res;
  void backward(int