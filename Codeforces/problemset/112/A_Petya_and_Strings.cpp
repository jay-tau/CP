#include <iostream>
using namespace std;

int main() {
  string a{};
  string b{};
  cin >> a;
  cin >> b;
  int ans{0};
  for (int i = 0; i < a.length(); i++) {
    char c_a = tolower(a[i]), c_b = tolower(b[i]);
    if (c_a > c_b) {
      ans = 1;
      break;
    } else if (c_a < c_b) {
      ans = -1;
      break;
    }
  }
  cout << ans << '\n';
  return 0;
}
