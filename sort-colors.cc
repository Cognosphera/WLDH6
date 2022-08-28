// Sort Colors
// Dutch national flag problem

class Solution {
public:
  void sortColors(vector<int> &a) {
    for (int r = 0, w = 0, b = a.size(); w < b; )
      if (a[w] == 0)
        swap(a[r++], a[w++]);
      else if (a[w] == 2)
        swap(a[--b], a[w]);
      else
        w++;
  }
};

///

// 如果不要求000111222，允許111000222111，那麼有交換次數更少的Bentley-McIlroy算法
// http://www.iis.sinica.edu.tw/~scm/ncs/2010/10/dutch-national-flag-problem-3/
class Solution {
public:
  void sortColors(vector<int> &a) {
    int w = 