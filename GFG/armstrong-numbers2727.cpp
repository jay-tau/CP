// User function Template for C++
class Solution {
public:
  string armstrongNumber(int n) {
    int sum = 0, n_copy = n;
    while (n > 0) {
      int digit = n % 10;
      sum += (digit * digit * digit);
      n /= 10;
    }
    return (sum == n_copy) ? "Yes" : "No";
  }
};