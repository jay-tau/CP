#include <iostream>
using namespace std;

int main() {
    int t{};
    cin >> t;
    while (t--) {
        string s{};
        cin >> s;
        string ans{s[0]};
        int len = s.length();
        for (int i = 1; i < len; i++) {
            if (i % 2 != 0) {
                ans += s[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}