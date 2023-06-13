/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
 public:
  // Function to return a list of nodes visible from the top view
  // from left to right in Binary Tree.
  vector<int> topView(Node* root) {
    if (root == nullptr) return {};

    map<int, int> m;            // { offset, node}
    queue<pair<Node*, int>> q;  // {node, offset}

    q.push({root, 0});

    while (!q.empty()) {
      pair<Node*, int> p = q.front();
      q.pop();
      Node* current_node = p.first;
      int current_offset = p.second;

      if (current_node == nullptr) continue;

      if (m.find(current_offset) == m.end())  // Element not present
        m[current_offset] = current_node->data;

      // Insert its children
      q.push({current_node->left, current_offset - 1});
      q.push({current_node->right, current_offset + 1});
    }

    vector<int> top_view;
    for (pair<int, int> p : m) {
      int offset = p.first, node = p.second;
      top_view.push_back(node);
    }

    return top_view;
  }
};
