#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  long long x[n];
  for (int i = 0; i < n; i++) {
    int x_i;
    cin >> x_i;
    if (i == 0)
      x[i] = x_i;
    else
      x[i] = x[i - 1] + x_i;
  }
  // for (auto i: x)
  // cout << i << " ";
  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    cout << x[b - 1] - ((a >= 2) ? (x[a - 2]) : 0) << '\n';
  }
  return 0;
}
