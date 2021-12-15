// Mini Parser
class Solution {
public:
  NestedInteger deserialize(string s) {
    if (s[0] != '[')
      return NestedInteger(stoi(s));
    NestedInteger r;
    stack<NestedInteger> st;
    size_t l;
    for (size_t i = 0; i < s.size(); i++)
      if (s[i] == '[') {
        st.emplace();
        l = i+1;
      } else if (s[i] == ',' || s[i] == ']') {
        if (l < i)
          st.top().add(NestedInteger(stoi(s.substr(l