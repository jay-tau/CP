

/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

// Function to return a list containing the preorder traversal of the tree.
vector<int> preorder(Node* root) {
  vector<int> traversal;

  if (root == nullptr) return {};

  traversal.push_back(root->data);
  for (auto x : preorder(root->left)) traversal.push_back(x);
  for (auto x : preorder(root->right)) traversal.push_back(x);

  return traversal;
}
