/**
 *    author:  jaytau
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
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
  int N = 200000 + 1;
  int c[N];
  memset(c, 0, sizeof(c));
  int n, k, q;
  cin >> n >> k >> q;
  // cout << q << endl;
  fo1(i, n) {
    int l, r;
    cin >> l >> r;
    c[l]++;
    c[r + 1]--;
  }
  fo1(i, N) {
    c[i] += c[i - 1]; // Prefix sum
  }
  fo1(i, N) {
    c[i] =
        c[i - 1] + (c[i] >= k ? 1 : 0); // Adds previous if it is greater than
                                        // equal to k, ie conditional prefix sum
  }
  while (q--) {
    int a, b;
    cin >> a >> b;
    cout << (c[b] - c[a - 1]) << endl;
    // cout << i << " ";
  }
}

int main() {
  fastio();
  test1() { solve(); }
  return 0;
}
