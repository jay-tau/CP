/**
 *    author:  jaytau
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(), (x).end()

#define F first
#define S second
#define pb push_back
#define mp make_pair

#define fo(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define fo1(i, n) for (int(i) = 1; (i) <= (n); (i)++)
#define foll(i, n) for (ll(i) = 0; (i) < (n); (i)++)
#define fo1ll(i, n) for (ll(i) = 1; (i) <= (n); (i)++)

ll modpower(ll x, ll y, ll p) {
  ll res = 1;
  x = x % p;
  while (y > 0) {
    if (y & 1)
      res = (res * x) % p;
    y = y >> 1;
    x = (x * x) % p;
  }
  return (res + p) % p;
}
ll modinv(ll x, ll p) { return modpower(x, p - 2, p); }
ll modmul(ll a, ll b, ll p) { return (a % p * b % p) % p; }
ll modadd(ll a, ll b, ll p) { return (a % p + b % p) % p; }
ll modsub(ll a, ll b, ll p) { return (a % p - b % p + p) % p; }
ll moddiv(ll a, ll b, ll p) { return modmul(a, modinv(b, p), p); }
ll factmod(ll n, ll p) {
  vector<ll> f(p);
  f[0] = 1;
  for (ll i = 1; i < p; i++)
    f[i] = f[i - 1] * i % p;

  ll res = 1;
  while (n > 1) {
    if ((n / p) % 2)
      res = p - res;
    res = res * f[n % p] % p;
    n /= p;
  }
  return res;
}

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
  ll n;
  cin >> n;
  string input;
  cin >> input;
  string s = "S" + input; // Trick to make input 1-indexed
  // cout << s << endl;

  // Count the number of sheep and store their positions
  ll sheep_count = 0;
  vll sheep_position = {-1}; // Trick to make vector 1-indexed
  fo1ll(i, n) {
    if (s[i] == '*') {
      sheep_count++;
      sheep_position.pb(i);
    }
  }
  // cout << sheep_count << endl;
  /* for(auto i: sheep_position)
          cout << i << " ";
  cout << endl; */

  // ceil(sheep_count/2) or (sheep_count/2)+1 -th sheep remains in place
  // int mid_sheep = ceil(sheep_count/2.0);
  ll mid_sheep = (sheep_count / 2) + 1;
  // cout << sheep_count << endl;
  ll mid_pos = sheep_position[mid_sheep];

  // For sheep after the mid_sheep
  ll ans = 0;
  for (ll i = mid_sheep + 1; i <= sheep_count; i++) {
    ans += abs(mid_pos + i - mid_sheep - sheep_position[i]);
  }
  // For sheep before the mid_sheep
  for (ll i = 1; i <= mid_sheep - 1; i++) {
    ll delta_sheep = mid_sheep - i;
    ll new_pos = mid_pos - delta_sheep;
    ll delta_loc = new_pos - sheep_position[i];
    // cout << delta_loc << endl;
    ans += abs(delta_loc);
  }
  cout << ans << endl;
}

int main() {
  fastio();
  test() { solve(); }
  return 0;
}
