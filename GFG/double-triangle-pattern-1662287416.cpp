class Solution {
public:
  void printTriangle(int n) {
    for (int i = 1; i < n; ++i) {
      int num_spaces = ((2 * n) - (2 * i));
      for (int j = 0; j < i; ++j)
        cout << "*";
      for (int j = 0; j < num_spaces; ++j)
        cout << " ";
      for (int j = 0; j < i; ++j)
        cout << "*";
      cout << endl;
    }
    for (int i = n; i >= 1; --i) {
      int num_spaces = ((2 * n) - (2 * i));
      for (int j = 0; j < i; ++j)
        cout << "*";
      for (int j = 0; j < num_spaces; ++j)
        cout << " ";
      for (int j = 0; j < i; ++j)
        cout << "*";
      cout << endl;
    }
  }
};
