#include <iostream>
using namespace std;

int main() {
  int n{};
  cin >> n;
  int ans[n];
  for (int i = 0; i < n; i++) {
    int p_i{};
    cin >> p_i;
    ans[p_i - 1] = (i + 1);
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << (i == (n - 1) ? '\n' : ' ');
  }
  return 0;
}
