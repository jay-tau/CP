#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int b[n];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    sort(b, b + n);
    bool possible = true;
    // bool added = false;
    for (int i = 0; i < n; i++) {
      if (!((a[i] == b[i]) || (b[i] - a[i] == 1))) {
        possible = false;
        break;
      }
    }
    if (possible) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
