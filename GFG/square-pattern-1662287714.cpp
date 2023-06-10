class Solution {
 public:
  void printSquare(int n) {
    if (n == 0) return;

    for (int i = 0; i < n; ++i) cout << "*";
    cout << endl;

    if (n == 1) return;

    for (int i = 0; i < (n - 2); ++i) {
      cout << "*";
      for (int j = 0; j < (n - 2); ++j) cout << " ";
      cout << "*" << endl;
    }

    for (int i = 0; i < n; ++i) cout << "*";
    cout << endl;
  }
};
