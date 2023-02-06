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
  ll a, b, c;
  cin >> a >> b >> c;
  ll el_1 = abs(a - 1);
  ll el_2 = abs(b - c) + abs(c - 1);
  if (el_1 == el_2)
    cout << 3 << endl;
  else if (el_1 < el_2)
    cout << 1 << endl;
  else
    cout << 2 << endl;
}

int main() {
  fastio();
  test() { solve(); }
  return 0;
}