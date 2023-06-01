/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution {
public:
  int peakElement(int arr[], int n) { // Single element
    if (n == 1)
      return 0;
    // First element
    if (arr[0] >= arr[1])
      return 0;
    // Last element
    if (arr[n - 1] >= arr[n - 2])
      return n - 1;
    for (int i = 1; i < (n - 1); ++i) {
      if ((arr[i - 1] <= arr[i]) && (arr[i] >= arr[i + 1]))
        return i;
    }
  }
};