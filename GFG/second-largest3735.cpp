// User function template for C++
class Solution {
 public:
  // Function returns the second
  // largest elements
  int print2largest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; ++i) largest = max(largest, arr[i]);

    int second_largest = -1;
    for (int i = 0; i < n; ++i) {
      if (arr[i] != largest) second_largest = max(second_largest, arr[i]);
    }

    return second_largest;
  }
};
