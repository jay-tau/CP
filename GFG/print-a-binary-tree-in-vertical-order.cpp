class Solution {
 public:
  // Function to find the vertical order traversal of Binary Tree.
  vector<int> verticalOrder(Node* root) {
    vector<int> vertical_order_traversal;

    map<int, vector<int>> m;    // { offset, nodes}
    queue<pair<Node*, int>> q;  // { node, offset }

    q.push({root, 0});

    while (!q.empty()) {
      pair<Node*, int> p = q.front();
      q.pop();
      Node* current_node = p.first;
      int current_offset = p.second;

      if (current_node == nullptr) continue;

      m[current_offset].push_back(current_node->data);  // Insert into map

      if (current_node->left != nullptr)
        q.push({current_node->left, current_offset - 1});
      if (current_node->right != nullptr)
        q.push({current_node->right, current_offset + 1});
    }

    for (pair<int, vector<int>> p : m) {
      vector<int> v = p.second;
      for (int x : v) vertical_order_traversal.push_back(x);
    }

    return vertical_order_traversal;
  }
};
