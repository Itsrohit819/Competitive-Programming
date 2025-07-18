#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int mx = v[0], d = 0;
    for (int i = 1; i < n; i++) {
        d = max(d, max(0ll, mx - v[i]));
        mx = max(mx, v[i]);
    }

    int ans = -1;
    for (int i = 0; i <= 31; i++)
        if (d & (1ll << i)) ans = max(ans, i);

    cout << ans + 1 << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
