#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(void) {
  fastio;
  int a, b;
  cin >> a >> b;
  int tmp1, tmp2;
  for(int i = 0; i < a; ++i) cin >> tmp1 >> tmp2;
  int R = 0, G = 0, B = 0;
  char tmp;
  for(int i = 0; i < b; ++i) {
    cin >> tmp1 >> tmp2 >> tmp;
    if(tmp == 'R') ++R;
    else if(tmp == 'G') ++G;
    else ++B;
  }
  int ans1 = R, ans2 = B;
  if(G % 2 == 1) ++ans1;
  else ++ans2;
  if(ans1 > ans2) cout << "jhnah917";
  else cout << "jhnan917";
}