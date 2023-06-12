/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
 private:
  vector<int> left_boundary, leaf_nodes, right_boundary;
  void printLeft(Node* node) {
    if (node == nullptr) return;

    if (!((node->left == nullptr) &&
          (node->right == nullptr)))  // Not Leaf node
      left_boundary.push_back(node->data);

    if (node->left != nullptr)
      printLeft(node->left);
    else
      printLeft(node->right);
  }
  void printLeafs(Node* root) {
    if (root == nullptr) return;

    if ((root->left == nullptr) && (root->right == nullptr))  // Leaf node
      leaf_nodes.push_back(root->data);

    printLeafs(root->left);
    printLeafs(root->right);
  }
  void printRight(Node* node) {
    if (node == nullptr) return;

    if (!((node->left == nullptr) &&
          (node->right == nullptr)))  // Not Leaf node
      right_boundary.push_back(node->data);

    if (node->right != nullptr)
      printRight(node->right);
    else
      printRight(node->left);
  }

 public:
  vector<int> boundary(Node* root) {
    printLeft(root->left);  // Print left boundary

    // Print leafs, not in boundary
    printLeafs(root->left);
    printLeafs(root->right);

    printRight(root->right);  // Print right

    vector<int> boundary = {(root->data)};
    for (auto x : left_boundary) {
      boundary.push_back(x);
    }
    for (auto x : leaf_nodes) {
      boundary.push_back(x);
    }
    reverse(right_boundary.begin(), right_boundary.end());
    for (auto x : right_boundary) {
      boundary.push_back(x);
    }

    return boundary;
  }
};
