// User function Template for C++
/*Structure of the node of the binary tree is as
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
 public:
  // Function to store the zig zag order traversal of tree in a list.
  vector<int> zigZagTraversal(Node* root) {
    if (root == nullptr) return {};

    vector<int> traversal;
    deque<Node*> q;
    bool left_to_right = true;

    q.push_back(root);

    while (!q.empty()) {
      Node* current_node;
      int level_size = q.size();

      while (level_size--) {
        if (left_to_right) {
          current_node = q.front();
          q.pop_front();
        } else {
          current_node = q.back();
          q.pop_back();
        }

        if (current_node == nullptr) continue;

        traversal.push_back(current_node->data);

        if (left_to_right) {
          q.push_back(current_node->left);
          q.push_back(current_node->right);
        } else {
          q.push_front(current_node->right);
          q.push_front(current_node->left);
        }
      }
      left_to_right = !left_to_right;
    }

    return traversal;
  }
};
