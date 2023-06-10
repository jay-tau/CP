/**
 *    author:  jaytau
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef pair<int, int> intpair;

#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(), (x).end()

#define F first
#define S second
#define pb push_back
#define mp make_pair

#define fo(i, n) for (int(i) = 0; (i) < (n); (i)++)

#define fastio()                                                               \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

#define test()                                                                 \
  int _;                                                                       \
  cin >> _;                                                                    \
  while (_--)

#define test1()                                                                \
  int t;                                                                       \
  t = 1;                                                                       \
  while (t--)

void solve() {
  int n;
  cin >> n;
  vint a(n);
  fo(i, n) { cin >> a[i]; }
  int ans = 0;
  while (!is_sorted(a.begin(), a.end())) {
    for (int i = ans % 2; (i + 1) < n; i += 2) {
      if (a[i] > a[i + 1])
        swap(a[i], a[i + 1]);
    }
    ans++;
  }
  cout << ans << endl;
}

int main() {
  fastio();
  test() { solve(); }
  return 0;
}
