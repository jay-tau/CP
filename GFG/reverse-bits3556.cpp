class Solution {
public:
  long long reversedBits(long long X) {
    long long ans = 0;
    int n = 32;
    while (n--) {
      ans *= 2;
      ans += (X % 2);
      X /= 2;
    }
    return ans;
  }
};