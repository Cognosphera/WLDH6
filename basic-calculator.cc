// Basic Calculator
// operator-precedence parser
class Solution
{
public:
  int calculate(string s) {
    stack<int> xs;
    stack<char> ops;
    map<char, int