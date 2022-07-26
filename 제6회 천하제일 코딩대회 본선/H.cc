#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

ll gcd(ll a, ll b) {
  ll n;
  while(b) {
    n = a % b;
    a = b;
    b = n;
  }
  return a;
}

ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main(void) {
  int T;
  cin >> T;
  while(T--) {
    ll N;
    cin >> N;
    ll mx = 0;
    rmax(mx, lcm(N, lcm(N - 1, N - 2)));
    if(N > 3) {
      rmax(mx, lcm(N, lcm(N - 1, N - 3)));
      rmax(mx, lcm(N - 1, lcm(N - 2, N - 3)));
    }
    cout << mx << endl;
  }
} 