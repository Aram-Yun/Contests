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

int main(void) {
  fastio;
  int N, Q;
  cin >> N >> Q;
  ll rn = 0;
  while(Q--) {
    ll a, l, r;
    cin >> a >> l >> r;
    if(a == 2) rn += ((r - l) * (1 + r - l) / 2) % 2;
    else rn += 1;
    cout << rn % 2 << endl;
  }
} 