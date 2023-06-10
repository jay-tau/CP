// User function Template for C++
class Solution {
public:
  long long count(int n) {
    return pow(2, (n * (n - 1) / 2)); // nC2 edges => 2^nC2 graphs
  }
};
