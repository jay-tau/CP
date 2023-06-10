// User function template for C++
class Solution {
 public:
  int search(int A[], int N) {
    // x^x = 0, 0^x = x
    int ans = 0;
    for (int i = 0; i < N; ++i) ans ^= A[i];
    return ans;
  }
};
