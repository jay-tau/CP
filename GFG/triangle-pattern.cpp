class Solution {
 public:
  void printTriangle(int n) {
    for (int i = n; i >= 1; --i) {
      for (int j = 0; j < i; ++j) cout << "* ";
      cout << endl;
    }
  }
};
