#include <bits/stdc++.h>
using namespace std;

int main() {
  int _;
  cin >> _;
  while (_--) {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // tolower()
    if (s == "yes") {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}