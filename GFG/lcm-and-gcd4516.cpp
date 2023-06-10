class Solution {
 public:
  vector<long long> lcmAndGcd(long long A, long long B) {
    long long hcf = __gcd(A, B);
    long long lcm = (max(A, B) / hcf) * min(A, B);
    return {lcm, hcf};
  }
};
