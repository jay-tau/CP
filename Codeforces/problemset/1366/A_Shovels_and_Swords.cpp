#include <bits/stdc++.h>
using namespace std;

int main() {
    int _;
    cin >> _;
    while (_--) {
        int a, b;
        cin >> a >> b;
        cout << min(((a+b)/3), min(a, b)) << '\n';
    }
}