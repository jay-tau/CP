// User function template for C++

class Solution {
public:
  int binarysearch(int arr[], int n, int k) {
    int l = 0, r = n - 1;
    int mid;
    while (l <= r) {
      mid = (l + r) / 2;
      if (arr[mid] > k)
        r = mid - 1;
      else if (arr[mid] < k)
        l = mid + 1;
      else
        return mid;
    }
    return -1;
  }
};
