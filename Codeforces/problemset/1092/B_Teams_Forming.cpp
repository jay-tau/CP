#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int ans = 0;
  // 	for (int i = 0; i < n; i++) {
  // 	    cout << a[i] << ' ';
  // 	}
  for (int i = 0; i < n; i += 2) {
    ans += (a[i + 1] - a[i]);
    // cout << ans << ' ';
  }
  // 	cout << endl;
  cout << ans << '\n';
  return 0;
}
