#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x,y;
		cin >> x >> y;
		int ans{0};
		if (y > x) {
			ans = (y - x);
		}
		cout << ans << '\n';
	}
	return 0;
}
