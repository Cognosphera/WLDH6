// Repeated DNA Sequences

// rolling hash

class Solution {
public:
  vector<string> findRepeatedDnaSequences(string a) {
    unsigned i = 0, n = a.size(), t = 0;
    unordered_map<unsigned, unsigned> m;
    vector<string> r;
    while (i < min(9u, n))
      t = t<<3 | a[i++]&7;
    while (i < n)
      if (m[t = t<<3 & 0x3fffffff | a[i++]&7]++ == 1)
        r.push_back(a.substr(i-10, 10));
    return r;
  }
};

// suffix array

#define REP(i, n) FOR(i, 0, n)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (b); 