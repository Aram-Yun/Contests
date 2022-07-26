#include <bits/stdc++.h>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main() {
	fastio;
	int N, Q;	cin >> N >> Q;
	int ans = 0;
	while(Q--) {
		int t, x, y;	cin >> t >> x >> y;
		if(t == 1) {
			ans ^= 1;
		}
		else if(t == 2) {
			if((y - x + 1) / 2 & 1)	ans ^= 1;
		}
		cout << ans << endl;
	}
	return 0;
}