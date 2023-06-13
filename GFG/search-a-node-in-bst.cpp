

// Function to search a node in BST.
bool search(Node* root, int x) {
  if (root == nullptr)  // Not found if node is nullptr
    return false;

  if (root->data == x) return true;
  if (x < root->data) return search(root->left, x);
  if (x > root->data) return search(root->right, x);
}
