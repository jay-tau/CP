// Function to return a list containing the bottom view of the given tree.

class Solution {
 public:
  vector<int> bottomView(Node* root) {
    if (root == nullptr) return {};

    map<int, int> m;            // { offset, node->data }
    queue<pair<Node*, int>> q;  // { node, offset }

    q.push({root, 0});

    while (!q.empty()) {
      pair<Node*, int> p = q.front();
      q.pop();
      Node* current_node = p.first;
      int current_offset = p.second;

      if (current_node == nullptr) continue;

      m[current_offset] = current_node->data;  // Update offset with latest node

      // Insert children
      q.push({current_node->left, current_offset - 1});
      q.push({current_node->right, current_offset + 1});
    }

    vector<int> bottom_view;
    for (pair<int, int> p : m) {
      int offset = p.first, node = p.second;
      bottom_view.push_back(node);
    }

    return bottom_view;
  }
};
