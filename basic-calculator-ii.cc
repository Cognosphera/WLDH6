// Basic Calculator II
// operator-precedence parser
class Solution
{
public:
  int calculate(string s) {
    stack<int> xs;
    stack<char> ops;
    map<char, int> isp, icp;
    isp['\0'] = 0; isp['+'] = 3; isp['-'] = 3; isp['*'] = 5; isp['/'] = 5; isp['('] = 1;
    icp['\0'] = 0; icp['+'] = 2; icp['-'] = 2; icp['*'] = 4; icp['/'] = 4; icp['('] = 6; icp[')'] = 1;
    ops.push('\0');
    for (size_t i = 0; i <= s.size(); ) {
      char op = i == s.size() ? '\0' : s[i