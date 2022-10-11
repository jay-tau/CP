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


bool sortPairDescAsc(const pair<int, int>& a, const pair<int, int>& b) { // Sorts (descending, ascending)
	if (a.F != b.F)
		return (a.first > b.first);
	else
		return (a.S < b.S);
}

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	int start_char_value = (int)s[0], end_char_value = (int)s[(n - 1)];


	// Make a vector of pair<character_value, index>
	vector<pi> v;
	fo(i, n) {
		pi current_pair;
		current_pair.F = (int)(s[i]);
		current_pair.S = i;
		v.pb(current_pair);
	}

	int step = (start_char_value > end_char_value) ? (-1) : (1);

	// Sort the vector based on character values
	if (step == 1)
		sort(all(v));
	else
		sort(all(v), sortPairDescAsc);

	// fo(i, n) // View vector of pairs after sorting
		// cout << v[i].F << ", " << v[i].S << endl;

	int prev_char_value = start_char_value;
	int num_jumps = 0, net_cost = 0;

	vi jump_indices = {};

	fo(i, n) {
		int current_char_value = v[i].F;

		// Ensures that only letters between start and end are printed
		if (step == 1) {
			if (current_char_value > end_char_value) {
				break;
			}
			if (current_char_value < start_char_value) {
				continue;
			}
		} else { // When step is -1
			if (current_char_value < end_char_value)
				break;
			if (current_char_value > start_char_value)
				continue;
		}

		num_jumps++;
		net_cost += abs(current_char_value - prev_char_value);
		prev_char_value = current_char_value;
		jump_indices.pb(v[i].S + 1);
	}

	cout << net_cost << " " << num_jumps << endl; // Print 1st line of required output
	fo(i, jump_indices.size()) // Print 2nd line of required output
		cout << jump_indices[i] << " ";
	cout << endl; //Move to next line for next testcase's output
}

int main() {
	fastio();
	test() {
		solve();
	}
	return 0;
}