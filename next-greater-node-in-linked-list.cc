// Next Greater Node In Linked List
class Solution {
public:
  vector<int> nextLargerNodes(ListNode* h) {
    vector<int> a, s, r;
    for (int i = 0; h; h = h->next, i++) {
      a.push_back(h->val);
      r.push_