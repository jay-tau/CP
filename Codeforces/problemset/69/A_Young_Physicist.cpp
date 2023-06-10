#include <iostream>
using namespace std;

int main() {
  int n{};
  cin >> n;
  int sum[3] = {0, 0, 0};
  while (n--) {
    int x_i{}, y_i{}, z_i{};
    cin >> x_i >> y_i >> z_i;
    sum[0] += x_i;
    sum[1] += y_i;
    sum[2] += z_i;
  }
  for (int i = 0; i < 3; i++) {
    if (sum[i] != 0) {
      cout << "NO" << '\n';
      return 0;
    }
  }
  cout << "YES" << '\n';
  return 0;
}
