class Solution {
public:
  void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
      for (char j = 'A'; j < ('A' + i); ++j)
        cout << j;
      cout << endl;
    }
  }
};
