#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		vector<pair<int, int>> dp(n + 1, {0, 1});
		int r = 0;
		for (int i = n - 1; i >= 0; i--) {
			auto [s, c] = dp[i + 1];
			pair<int, int> p1 = {s + a[i], c};
			pair<int, int> p2 = {s + r + a[i], c + 1};
			dp[i] = max(p1, p2);
			r += a[i];
		}
		cout << dp[0].first << '\n';
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
