#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long int h[n];
  for (int i = 0; i < n; i++) {
    int h_i;
    cin >> h_i;
    if (i == 0)
      h[i] = h_i;
    else
      h[i] = h[i - 1] + h_i;
  }
  // for (auto i: h)
  // cout << i << " ";
  cout << endl << endl;
  int min_index = -1;
  long long int min_sum = LLONG_MAX;
  for (int i = 0; i <= (n - k); i++) {
    long long int lower = (i == 0) ? 0 : (h[i - 1]);
    long long int sum = h[i + k - 1] - lower;
    // cout << min_sum << endl;
    if (sum < min_sum) {
      min_index = i;
      min_sum = sum;
    }
    // cout << i << " " << "sum" << " " << sum << endl;
  }
  // cout << min_sum << endl;
  cout << min_index + 1 << '\n';
  return 0;
}