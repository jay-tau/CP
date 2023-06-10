// User function Template for C++

class Solution {
 public:
  string is_palindrome(int n) {
    int n_rev = 0, n_copy = n;
    while (n > 0) {
      n_rev *= 10;
      n_rev += (n % 10);
      n /= 10;
    }
    return (n_rev == n_copy) ? "Yes" : "No";
  }
};
