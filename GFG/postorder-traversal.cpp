

// User function Template for C++

/* A binary tree node has data, pointer to left child

   and a pointer to right child

struct Node

{

    int data;

    struct Node* left;

    struct Node* right;

}; */

// Function to return a list containing the postorder traversal of the tree.

vector<int> postOrder(Node* root) {
  vector<int> traversal;

  if (root == nullptr) return {};

  for (auto x : postOrder(root->left)) traversal.push_back(x);

  for (auto x : postOrder(root->right)) traversal.push_back(x);

  traversal.push_back(root->data);

  return traversal;
}
