class Solution {
public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      char out_char = 'A' + n - 1;
      for (int j = 0; j < i; ++j, --out_char)
        cout << out_char << " ";
      cout << endl;
    }
  }
};
