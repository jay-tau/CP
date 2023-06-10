#include <bits/stdc++.h>
using namespace std;

int main() {
  int _;
  cin >> _;
  while (_--) {
    int n;
    cin >> n;

    int l[n];
    for (int i = 0; i < n; i++) {
      cin >> l[i];
    }

    int count = 0;
    int front_index = 0, back_index = (n - 1);
    int front_pointer = l[front_index], back_pointer = l[back_index];

    while (front_index < back_index) {
      if (front_pointer == back_pointer) {
        count = (front_index + 1);
        count += (n - back_index);
        front_index++;
        back_index--;
        front_pointer += l[front_index];
        back_pointer += l[back_index];
      } else if (front_pointer < back_pointer) {
        front_index++;
        front_pointer += l[front_index];
      } else if (front_pointer > back_pointer) {
        back_index--;
        back_pointer += l[back_index];
      }
    }  // end while
    cout << count << '\n';
  }  // end testcases
  return 0;
}
