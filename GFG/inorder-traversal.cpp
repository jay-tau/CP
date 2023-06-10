/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
 public:
  // Function to return a list containing the inorder traversal of the tree.
  vector<int> inOrder(Node* root) {
    vector<int> traversal;

    if (root == nullptr) return {};

    for (auto x : inOrder(root->left)) traversal.push_back(x);
    traversal.push_back(root->data);
    for (auto x : inOrder(root->right)) traversal.push_back(x);

    return traversal;
  }
};