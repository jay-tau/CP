class Solution {
public:
  int evenlyDivides(int N) {
    int n = N, count = 0;
    while (n > 0) {
      int digit = n % 10;
      n /= 10;
      if (digit == 0)
        continue;
      if (N % digit == 0)
        ++count;
    }
    return count;
  }
};
