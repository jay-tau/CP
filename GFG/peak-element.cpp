/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution {
 public:
  int peakElement(int arr[], int n) {
    if (n == 1) return 0;
    if (n == 2) return (arr[0] >= arr[1]) ? 0 : 1;

    int l = 0, r = n - 1;
    while (l <= r) {
      int mid = (l + r) / 2;

      int current_element = arr[mid];
      int left_element = ((mid - 1) < 0) ? INT_MIN : arr[mid - 1];
      int right_element = ((mid + 1) >= n) ? INT_MIN : arr[mid + 1];

      if ((left_element <= current_element) &&
          (current_element >= right_element))  // Peak
        return mid;
      if ((left_element <= current_element) &&
          (current_element <= right_element))  // Increasing
        l = mid + 1;                           // Move right
      else                                     // Decreasing
        r = mid - 1;
    }
    return -1;  // No possible answer
  }
};
