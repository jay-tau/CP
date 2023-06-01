class Solution {
public:
  // Function to find floor of x
  // n: size of vector
  // x: element whose floor is to find
  int findFloor(vector<long long> v, long long n, long long x) {
    if (v[0] > x)
      return -1;

    int l = 0, r = n - 1;
    while (l < r) {
      int mid = (l + r) / 2;
      if (x <= v[mid])
        r = mid;
      else
        l = mid + 1;
    }
    return l;
  }
};
