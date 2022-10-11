/*
    Coded by : Dip Turkar
    
    {TIPS WHILE STARTING}
    --using a set? check for PBDS!!!
    --modulo of negative numbers is not a%b, it is a%b + abs(b)!!!!!!!
    --lower_bound and set.lower_bound are different, use it wisely
    --string .append() or += is O(1), but s = s + s is O(n), use wisely
*/



/**
 *    author:  jaytau
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(), (x).end()

#define F first
#define S second
#define pb push_back
#define mp make_pair

#define fo(i, n) for (int (i) = 0; (i) < (n); (i)++)
#define fo1(i, n) for (int (i) = 1; (i) <= (n); (i)++)

#define fastio()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)

#define test() \
	int _;     \
	cin >> _;  \
	while (_--)

#define test1() \
	int t;      \
	t = 1;      \
	while (t--)


void solve() {
	int n;
	cin >> n;
	vi b(n);
	set<int> s;
	fo(i, n) {
		int inp;
		cin >> inp;
		b[i] = inp;
		s.insert(inp);
	}
	if (b.size() != s.size())
		YES;
	else
		NO;
}

int main() {
	fastio();
	test() {
		solve();
	}
	return 0;
}