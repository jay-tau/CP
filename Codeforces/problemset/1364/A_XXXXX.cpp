#include <bits/stdc++.h>
using namespace std;

int main() {
  int _;
  cin >> _;
  while (_--) {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
      int a_i;
      cin >> a_i;
      a[i] = (a_i % x);
    }
  }
  return 0;
}