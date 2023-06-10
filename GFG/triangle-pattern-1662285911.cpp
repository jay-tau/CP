class Solution {
public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      int num_chars = (2 * i) - 1;
      int num_spaces = (((2 * n) - 1) - num_chars) / 2;

      for (int j = 0; j < num_spaces; ++j)
        cout << " ";
      for (int j = 0; j < i; ++j) {
        char out_char = ('A' + j);
        cout << out_char;
      }
      for (int j = (i - 1); j >= 1; --j) {
        char out_char = ('A' + (j - 1));
        cout << out_char;
      }
      cout << endl;
    }
  }
};
