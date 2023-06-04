class Solution {
public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      int num_spaces = 2 * ((2 * n) - (2 * i));

      for (int j = 1; j <= i; ++j)
        cout << j << " ";
      for (int j = 0; j < num_spaces; ++j)
        cout << " ";
      for (int j = i; j >= 1; --j)
        cout << j << " ";
      cout << endl;
    }
  }
};
