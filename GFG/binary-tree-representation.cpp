// User function Template for C++

/*struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution {
public:
  void create_tree(node *root0, vector<int> &vec) {
    int i = 0;

    root0->data = vec[i++];

    root0->left = newNode(vec[i++]);
    root0->right = newNode(vec[i++]);
    root0->left->left = newNode(vec[i++]);
    root0->left->right = newNode(vec[i++]);
    root0->right->left = newNode(vec[i++]);
    root0->right->right = newNode(vec[i++]);
  }
};