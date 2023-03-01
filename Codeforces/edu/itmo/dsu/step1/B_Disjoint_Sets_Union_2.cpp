/**
 *    author:  jaytau
 **/

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) (x).begin(), (x).end()

#define F first
#define S second
#define pb push_back
#define mp make_pair

#define fo(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define fo1(i, n) for (int(i) = 1; (i) <= (n); ++(i))
#define foll(i, n) for (ll(i) = 0; (i) < (n); ++(i))
#define fo1ll(i, n) for (ll(i) = 1; (i) <= (n); ++(i))

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

template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p) {
  return (istream >> p.first >> p.second);
}

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v) {
  for (auto &it : v)
    cin >> it;
  return istream;
}

template <typename T1, typename T2> // cout << pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p) {
  return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c) {
  for (auto &it : c)
    cout << it << " ";
  return ostream;
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
  int _;                                                                       \
  _ = 1;                                                                       \
  while (_--)

struct DSU {
  vi parent, set_size, min_element, max_element;

  DSU(int n) {
    parent.resize(n);
    set_size.resize(n);
    min_element.resize(n);
    max_element.resize(n);
    for (int i = 0; i < n; i++) {
      parent[i] = -1; // All root nodes have no parent
      set_size[i] = 1;
      min_element[i] = i, max_element[i] = i;
    }
  }

  int find_parent(int i) {
    if (parent[i] == -1)
      return i;
    return (parent[i] = find_parent(parent[i])); // Implements path compression
  }

  bool merge(int a, int b) { // Returns false if already in the same set
    int parent_a = find_parent(a), parent_b = find_parent(b);
    if (same(a, b))
      return false;
    // Implements small-to-large merging
    if (set_size[parent_a] < set_size[parent_b])
      swap(parent_a,
           parent_b); // Ensure that parent_a is always larger than parent_b
    parent[parent_b] = parent_a;

    set_size[parent_a] += set_size[parent_b];

    min_element[parent_a] = min(min_element[parent_a], min_element[parent_b]);
    max_element[parent_a] = max(max_element[parent_a], max_element[parent_b]);

    return true;
  }

  int segment_size(int i) { return set_size[find_parent(i)]; }

  bool same(int a, int b) { return find_parent(a) == find_parent(b); }

  int set_min(int i) { return (min_element[find_parent(i)] + 1); }

  int set_max(int i) { return (max_element[find_parent(i)] + 1); }
};

void solve() {
  int n, m;
  cin >> n >> m;
  DSU dsu(n);
  fo(query, m) {
    string s;
    cin >> s;
    if (s == "union") {
      int a, b;
      cin >> a >> b;
      --a, --b;
      dsu.merge(a, b);
    } else {
      int x;
      cin >> x;
      --x;
      cout << dsu.set_min(x) << ' ' << dsu.set_max(x) << ' '
           << dsu.segment_size(x) << endl;
    }
  }
}

int main() {
  fastio();
  test1() { solve(); }
  return 0;
}