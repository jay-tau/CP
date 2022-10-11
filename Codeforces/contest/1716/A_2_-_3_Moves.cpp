#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans;
        if (n == 1) {
            ans = 2;
        } else if (n == 2 || n == 3) {
            ans = 1;
        } else {
            ans = ceil(n/3.0);
        }
        cout << ans << '\n';
    }
}