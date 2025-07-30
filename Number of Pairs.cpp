#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
int a[200005];

int f(int x) {
    int c = 0;
    for (int i = 1; i < n; i++) {
        int j = upper_bound(a, a + i, x - a[i]) - a - 1;
        c += j + 1;
    }
    return c;
}

void solve() {
    int l, r;
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) {
        cout << "0\n";
        return;
    }
    sort(a, a + n);
    cout << f(r) - f(l - 1) << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
