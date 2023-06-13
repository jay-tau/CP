

// Function to find the minimum element in the given BST.

/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/
int minValue(Node* root) {
  if (root == nullptr) return -1;

  if (root->left != nullptr)
    minValue(root->left);
  else
    return root->data;
}
