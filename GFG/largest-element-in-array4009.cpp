// User function Template for C++

class Solution {
 public:
  int largest(vector<int> &arr, int n) {
    int largest = arr[0];
    for (int i = 1; i < n; ++i) largest = max(largest, arr[i]);
    return largest;
  }
};
