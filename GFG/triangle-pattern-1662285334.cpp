class Solution {
 public:
  void printTriangle(int n) {
    for (char i = 0; i < n; ++i) {
      for (int j = 0; j <= i; ++j) {
        char out_char = 'A' + i;
        cout << out_char;
      }
      cout << endl;
    }
  }
};
