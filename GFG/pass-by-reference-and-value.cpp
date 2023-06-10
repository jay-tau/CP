// User function Template for C++

class Solution {
 public:
  vector<int> passedBy(int a, int &b) {
    ++a;
    b += 2;
    return {a, b};
  }
};
