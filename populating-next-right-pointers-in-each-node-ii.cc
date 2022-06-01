// Populating Next Right Pointers in Each Node II
class Solution {
public:
  void connect(TreeLinkNode *p) {
    TreeLinkNode *pp = NULL, *q = NULL, *r;
    while (p) {
      q = NULL;
      for (; p; p = p->next) {
        r = NULL;
        if (p->left) {
          if (p->right)
  