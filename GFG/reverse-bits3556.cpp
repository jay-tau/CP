class Solution {
public:
  long long reversedBits(long long X) {
    long long ans = 0;
    int num_bits = 32;
    while (num_bits--) {
      // int bit = X % 2;
      ans <<= 1;
      ans += X % 2;
      X >>= 1;
      // ans = (2*ans) + bit;
    }
    return ans;
  }
};