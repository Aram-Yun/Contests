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

vector<int> v;

int gcd(int a, int b) {
  int n;
  if(a < b) swap(a, b);
  while(1) {
    n = a % b;
    if(!n) break;
    a = b;
    b = n;
  }
  return b;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

int main(void) {
  int N;
  cin >> N;
  v.resize(N - 1);
  for(int i = 0; i < N - 2; ++i) cin >> v[i];
  int tmp = v[0];
  for(int i = 1; i < N - 2; ++i) tmp = lcm(tmp, v[i]);
  cout << tmp;
} 