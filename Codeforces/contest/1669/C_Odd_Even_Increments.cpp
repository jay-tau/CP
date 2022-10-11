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
        vector<bool> odd, even;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                odd.push_back(l[i]%2);
            } else {
                even.push_back(l[i]%2);
            }
        } // end for(n)
        int s_odd = accumulate(odd.begin(), odd.end(), 0), s_even = accumulate(even.begin(), even.end(), 0);
        if ((s_odd == 0 || s_odd == odd.size()) && (s_even == 0 || s_even == even.size())) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}