// User function Template for C++

class Solution {
public:
  // Function to sort the array using bubble sort algorithm.
  void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
      for (int j = i; j < n; ++j) {
        if (arr[i - 1] > arr[j])
          swap(arr[i - 1], arr[j]);
      }
    }
  }
};
