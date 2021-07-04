// Integer to English Words
class Solution
{
  string f(int x, int i, int v[], string n[]) {
    if (! x) return "";
    for (; x < v[i]; i++);
    return (i < 4 ? f(x/v[i], i+1, v, n) : "") + n[i] + " " + f(x%v[i], i+1, v, n);
  }
public:
  string numberToWords(int x) {
    if (! x) r