class Solution {
 public:
  void printTriangle(int n) {
    for (int i = n; i >= 1; --i) {
      for (char j = 'A'; j < ('A' + i); ++j) cout << j;
      cout << endl;
    }
  }
};
