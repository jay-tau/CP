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

#define fo(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define fo1(i, n) for (int (i) = 1; (i) <= (n); ++(i)
#define foll(i, n) for (ll (i) = 0; (i) < (n); ++(i)
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
  int t;                                                                       \
  t = 1;                                                                       \
  while (t--)

double inHouse(double r_s, double r_h, pi stone_coordinates) {
  int x = stone_coordinates.F;
  int y = stone_coordinates.S;

  double center_distance = (x * x + y * y);

  if (center_distance > ((r_s + r_h) * (r_s + r_h)))
    return -1;
  else
    return center_distance;
}

void solve() {
  int r_stone, r_house;
  cin >> r_stone >> r_house;

  int num_stones_red;
  cin >> num_stones_red;
  vector<pi> red_stones(num_stones_red);
  fo(i, num_stones_red) {
    pi red_stone;
    cin >> red_stone;
    red_stones[i] = red_stone;
  }

  int num_stones_yellow;
  cin >> num_stones_yellow;
  vector<pi> yellow_stones(num_stones_yellow);
  fo(i, num_stones_yellow) {
    pi yellow_stone;
    cin >> yellow_stone;
    yellow_stones[i] = yellow_stone;
  }

  // for(auto i: red_stones) {
  // 	cout << i << endl;
  // }
  // for(auto i: yellow_stones) {
  // cout << i << endl;
  // }

  vector<pair<double, char>> valid_stones;
  fo(i, num_stones_red) {
    pi red_stone = red_stones[i];
    double distance = inHouse(r_stone, r_house, red_stone);
    if (distance >= 0) {
      valid_stones.pb({distance, 'R'});
    }
  }
  fo(i, num_stones_yellow) {
    pi yellow_stone = yellow_stones[i];
    double distance = inHouse(r_stone, r_house, yellow_stone);
    if (distance >= 0) {
      valid_stones.pb({distance, 'Y'});
    }
  }
  // for(auto pair: valid_stones) {
  // cout << pair << endl;
  // }
  sort(all(valid_stones));
  // for(auto pair: valid_stones) {
  // cout << pair << endl;
  // }

  if (valid_stones.size() == 0) {
    cout << "0 0" << endl;
    return;
  }
  if (num_stones_red == 0) {
    cout << "0 " << valid_stones.size() << endl;
    return;
  } else if (num_stones_yellow == 0) {
    cout << valid_stones.size() << " 0" << endl;
    return;
  }

  int red_score = 0, yellow_score = 0;
  char closest_stone_color = valid_stones[0].S;
  // cout << "closest_stone_color: " << closest_stone_color << endl;
  fo(i, valid_stones.size()) {
    if (valid_stones[i].S == closest_stone_color) {
      // Add score
      if (closest_stone_color == 'R')
        red_score++;
      else
        yellow_score++;
    } else
      break;
  }
  cout << red_score << " " << yellow_score << endl;
}

int main() {
  fastio();
  int testcases;
  cin >> testcases;
  for (int testcase = 1; testcase <= testcases; testcase++) {
    cout << "Case #" << testcase << ": ";
    solve();
  }
  return 0;
}