#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n >= 1900) {
      cout << "Division 1";
    } else if (1600 <= n && n <= 1899) {
      cout << "Division 2";
    } else if (1400 <= n && n <= 1599) {
      cout << "Division 3";
    } else if (n <= 1399) {
      cout << "Division 4";
    }
    cout << '\n';
  }
  return 0;
}