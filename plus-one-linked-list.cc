// Plus One Linked List
class Solution {
  ListNode* pointerReversal(ListNode* x) {
    ListNode *y, *z = NULL;
    while (x) {
      y = x->next;
      x->next = z;
      z = x;
      x = y;
    }
    return z;
  }
public:
  ListNode* plusOne(ListNode* head) {
    head = pointerReversal(head);
    ListNo