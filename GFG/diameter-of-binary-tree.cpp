/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
private:
  int max_diameter = 0;
  int height(Node *node) {
    if (node == nullptr)
      return 0;

    int left_height = height(node->left), right_height = height(node->right);

    max_diameter =
        max(max_diameter,
            (1 + left_height +
             right_height)); // Update diameter (+1 to include the node itself)

    return 1 + max(left_height, right_height); // Return height
  }

public:
  // Function to return the diameter of a Binary Tree.
  int diameter(Node *root) {
    height(root);
    return max_diameter;
  }
};
