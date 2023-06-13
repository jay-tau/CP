

/* A binary tree node

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

// Function to return a list containing elements of left view of the binary
// tree.
vector<int> leftView(Node* root) {
  if (root == nullptr) return {};

  map<int, int> m;  // { level, node->data }
  queue<pair<Node*, int>> q;

  q.push({root, 0});

  while (!q.empty()) {
    pair<Node*, int> p = q.front();
    q.pop();
    Node* current_node = p.first;
    int current_level = p.second;

    if (current_node == nullptr) continue;

    if (m.find(current_level) == m.end())  // Element not found
      m[current_level] = current_node->data;

    q.push({current_node->left, current_level + 1});
    q.push({current_node->right, current_level + 1});  // If left node is null
  }

  vector<int> left_view;
  for (pair<int, int> p : m) {
    int level = p.first, node = p.second;
    left_view.push_back(node);
  }

  return left_view;
}
