#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> s;

int ask(int l, int r) {
    cout << "? " << l << " " << r << endl;
    int x;
    cin >> x;
    return x;
}

int solve() {
    int n, t;
    cin >> n >> t;
    s.resize(n + 1, -1);
    while (t--) {
        int k;
        cin >> k;
        int l = 1, r = n, ans = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (s[m] == -1) {
                s[m] = ask(1, m);
            }
            int z = m - s[m];
            if (z >= k) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << "! " << ans << endl;
        for (int i = ans; i <= n; i++) {
            if (s[i] != -1) {
                s[i] = s[i] + 1;
            }
        }
    }
    return 0;
}

signed main() {
    int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
