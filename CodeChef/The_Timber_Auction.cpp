#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int m, n;
  cin >> m >> n;
  int a[m + 1][n + 1];
  long long int pf[m + 1][n + 1];
  for (int i = 0; i <= m; i++) {
    a[i][0] = 0;
    pf[i][0] = 0;
  }
  for (int j = 0; j <= n; j++) {
    a[0][j] = 0;
    pf[0][j] = 0;
  }

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
      pf[i][j] = a[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
    }
  }
  /**
  for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
          cout << pf[i][j] << " ";
      }
      cout << endl;
  }
  */

  int q;
  cin >> q;
  while (q--) {
    int y_1, x_1, y_2, x_2;
    cin >> y_1 >> x_1 >> y_2 >> x_2;
    long long int ans = pf[y_2][x_2] - pf[y_1 - 1][x_2] - pf[y_2][x_1 - 1] +
                        pf[y_1 - 1][x_1 - 1];
    cout << ans << '\n';
  }
  return 0;
}