// User function Template for C++
class Solution {
 public:
  vector<long long> factorialNumbers(long long N) {
    vector<long long> ans;
    long long f = 1, i = 1;
    while (f <= N) {
      ans.push_back(f);
      ++i;
      f *= i;
    }
    return ans;
  }
};
