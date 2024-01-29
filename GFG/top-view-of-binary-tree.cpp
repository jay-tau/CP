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
    map<int, int> m;            // (offset, node_value)
    queue<pair<Node*, int>> q;  // (node, offset)
    if (root) q.push({root, 0});

    while (!q.empty()) {
      pair<Node*, int> p = q.front();
      q.pop();
      Node* current_node = p.first;
      int current_offset = p.second;

      if (m.find(current_offset) == m.end())  // Offset not present
        m[current_offset] = current_node->data;

      if (current_node->left) q.push({current_node->left, current_offset - 1});
      if (current_node->right)
        q.push({current_node->right, current_offset + 1});
    }

    vector<int> top_view;
    for (auto p : m) {
      top_view.push_back(p.second);
    }

    return top_view;
  }
};
