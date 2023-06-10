class Solution {
 public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      for (int j = 0; j < i; ++j) cout << ((i + j) % 2) << " ";

      cout << endl;
    }
  }
};
