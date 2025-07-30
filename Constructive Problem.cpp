#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	map<int, int> freq;
	for (int x : a) freq[x]++;

	int mex = n;
	for (int i = 0; i <= n; i++) {
		if (!freq.count(i)) {
			mex = i;
			break;
		}
	}

	int l = -1, r = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == mex + 1) {
			if (l == -1) l = i;
			r = i;
		}
	}

	if (l == -1) {
		for (int i = 0; i < n; i++) {
			if (a[i] > mex || freq[a[i]] > 1) {
				cout << "Yes\n";
				return;
			}
		}
		cout << "No\n";
	} else {
		for (int i = l; i <= r; i++) {
			if (a[i] >= mex + 1) continue;
			if (freq[a[i]] == 1) {
				cout << "No\n";
				return;
			}
			freq[a[i]]--;
		}
		cout << "Yes\n";
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
