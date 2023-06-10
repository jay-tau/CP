class Solution {
 public:
  void printSquare(int n) {
    for (int i = 0; i < n; ++i) {    // Upper half
      for (int j = 0; j < n; ++j) {  // Q2
        int dist = min((i - 0), (j - 0));
        cout << (n - dist) << " ";
      }
      for (int j = 1; j < n; ++j) {  // Q1
        int dist = min((i - 0), ((n - 1) - j));
        cout << (n - dist) << " ";
      }
      cout << endl;
    }
    for (int i = 1; i < n; ++i) {
      for (int j = 0; j < n; ++j) {  // Q2
        int dist = min(((n - 1) - i), (j - 0));
        cout << (n - dist) << " ";
      }
      for (int j = 1; j < n; ++j) {  // Q1
        int dist = min(((n - 1) - i), ((n - 1) - j));
        cout << (n - dist) << " ";
      }
      cout << endl;
    }
  }
};
