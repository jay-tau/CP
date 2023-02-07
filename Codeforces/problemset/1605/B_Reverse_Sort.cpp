#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());
    int count_0 = 0, count_1 = 1;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0')
        count_0++;
      else
        count_1++;
    }
    int flag = ((sorted_s == s) ? 0 : 1);
    cout << flag << '\n';
    if (flag) {
      int k = 0;
      vector<int> answer_indices;
      for (int i = 0; i < n; i++) {
        char current_char = s[i];
        if ((i >= (count_0 - 1)) && current_char == '0') {
          answer_indices.push_back(i + 1);
          k++;
        } else if ((i <= (count_0 - 1)) && current_char == '1') {
          answer_indices.push_back(i + 1);
          k++;
        }
      }
      cout << k << ' ';
      for (int i = 0; i < k; i++) {
        cout << answer_indices[i] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}