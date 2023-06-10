class Solution {
 public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      int num_stars = (2 * i) - 1;
      int num_spaces = (((2 * n) - 1) - num_stars) / 2;

      for (int j = 0; j < num_spaces; ++j) cout << " ";
      for (int j = 0; j < num_stars; ++j) cout << "*";
      cout << endl;
    }
  }
};
