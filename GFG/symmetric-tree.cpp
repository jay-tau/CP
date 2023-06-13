/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
 private:
  bool isEqual(Node* a, Node* b) {
    if ((a == nullptr) && (b == nullptr)) return true;
    if ((a == nullptr) ^ (b == nullptr))  // Only 1 is nullptr
      return false;

    return (a->data == b->data) && isEqual(a->left, b->right) &&
           isEqual(a->right, b->left);
  }

 public:
  // return true/false denoting whether the tree is Symmetric or not
  bool isSymmetric(struct Node* root) {
    if (root == nullptr) return true;

    return isEqual(root->left, root->right);
  }
};
