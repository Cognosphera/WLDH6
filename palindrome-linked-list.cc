// Palindrome Linked List
class Solution {
  ListNode *rev(ListNode *x) {
    ListNode *y, *r = nullptr;
    while (x) {
      y = x->next;
      x->next = r;
      r = x;
      x = y;
    }
    return r;
  }
public:
  bool isPalindrome(ListNode *head) {
    if (! head) return true;
    ListNode *x = head, *y = head;
    while (y->next && y->next->next) {
      x = x->next;
      