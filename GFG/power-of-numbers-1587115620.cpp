class Solution {
public:
  // You need to complete this fucntion

  long long power(int N, int R) {
    const long long m = 1e9 + 7;

    if (R == 0)
      return 1;

    if (R % 2 == 0)
      return power(((N % m) * (N % m)) % m, (R / 2));
    else
      return ((N % m) * (power(N, R - 1) % m)) % m;
  }
};
