// Binary Search Tree Iterator
class BSTIterator {
public:
  stack<TreeNode *> s;

  BSTIterator(TreeNode *t) {
    for (; t; t = t->left)
      s.push(t);
  }

  /** @return whether we have a next smallest number */
  bool hasNext() {
    return ! s.empty();
  }

  /** @return the next smallest number */
  int next() {
    TreeNode *x = s.top();
    s.pop();
    int r = x->val;
    for (x = x->right; x; x = x->left)
      s.push(x);
    return r;
  }
};

// Morris inorder traversal

class BSTIterator {
public:
  TreeNode *x;

  BSTIterator(TreeNode *t) : x(t) {}

  /** @return whether