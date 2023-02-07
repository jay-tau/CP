#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int a[n + 1][n + 1];
  int pf[n + 1][n + 1];
  for (int i = 0; i <= n; i++) {
    a[i][0] = 0;
    pf[i][0] = 0;
    a[0][i] = 0;
    pf[0][i] = 0;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char tree_present;
      cin >> tree_present;
      // if (tree_present == '*')
      //     a[i][j] = 1;
      // else
      //     a[i][j] = 0;
      a[i][j] = ((tree_present == '*') ? 1 : 0);
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
  for (int i = 0; i < q; i++) {
    int y_1, x_1, y_2, x_2;
    cin >> y_1 >> x_1 >> y_2 >> x_2;
    int ans = pf[y_2][x_2] - pf[y_1 - 1][x_2] - pf[y_2][x_1 - 1] +
              pf[y_1 - 1][x_1 - 1];
    // cout << pf[3][4] << endl;
    cout << ans << endl;
  }
  return 0;
}