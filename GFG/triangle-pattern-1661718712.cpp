class Solution {
public:
  void printTriangle(int n) {
    int count = 1;
    for (int i = 1; i <= n; ++i) {
      for (int j = 0; j < i; ++j, ++count)
        cout << count << " ";
      cout << endl;
    }
  }
};
