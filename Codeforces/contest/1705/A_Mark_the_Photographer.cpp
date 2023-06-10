#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int h[2 * n];
    for (int i = 0; i < 2 * n; i++) {
      cin >> h[i];
    }
    sort(h, h + (2 * n));
    bool flag = true;
    for (int i = 0; i < n; i++) {
      if (!((h[n + i] - h[i]) >= x)) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
