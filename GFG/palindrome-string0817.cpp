// User function template for C++
class Solution {
public:
  int isPalindrome(string S) {
    int n = S.size();

    if (n <= 1)
      return true;

    return ((S[0] == S[n - 1]) && isPalindrome(S.substr(1, n - 2)));
  }
};
