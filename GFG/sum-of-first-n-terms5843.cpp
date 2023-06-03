// User function template for C++

class Solution {
public:
  long long sumOfSeries(long long N) {
    if (N == 1)
      return 1;
    return ((N * N * N) + sumOfSeries(N - 1));
  }
};
