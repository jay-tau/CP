// User function template for C++

class Solution {
public:
  int remove_duplicate(int a[], int n) {
    int writing_index = 1;
    for (int i = 1; i < n; ++i) {
      if (a[i] != a[i - 1]) {
        a[writing_index] = a[i];
        ++writing_index;
      }
    }
    return writing_index;
  }
};