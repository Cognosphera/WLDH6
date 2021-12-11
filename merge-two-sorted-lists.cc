// Merge Two Sorted Lists
// natural merge sort

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (! l1) return l2;
    if (! l2) return l1;
    ListNode *head, *p;
    if (l1->val < l2->val) {
      head = l1;
      l1 = l1->next;
    } else {
      head = l2;
      l2 = l2->next;
    }
    p = head;
