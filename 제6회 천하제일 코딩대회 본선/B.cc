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
  int T;
  cin >> T;
  while(T--) {
    string tmp;
    ll X, K;
    cin >> tmp >> K;
    if(tmp.size() > 19) {
      
    }
    for(ll i = X; i > 0; --i) {
      ll tmp = X;
      int cnt = 0;
      while(tmp > 0) ++cnt, tmp /= 10;
      int d[10] = {0, };
      for(int i = 0; i < cnt; ++i) {
        ++d[X % 10];
        X /= 10;
      }
      if(max_element(d, d + 10) - min_element(d, d + 10) <= K) {
        cout << i << endl;
        break;
      }
    } 
  }
} 