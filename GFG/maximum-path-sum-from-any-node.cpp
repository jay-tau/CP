// User Fuction template for C++

class Solution {
 private:
  int max_sum = INT_MIN;

  int search(Node* node) {
    if (node == nullptr) return 0;

    int left_sum = max(0, search(node->left)),
        right_sum = max(0, search(node->right));

    int current_sum = (node->data) + left_sum + right_sum;
    max_sum = max(max_sum, current_sum);

    return (node->data) + max(left_sum, right_sum);
  }

 public:
  // Function to return maximum path sum from any node in a tree.
  int findMaxSum(Node* root) {
    search(root);
    return max_sum;
  }
};
