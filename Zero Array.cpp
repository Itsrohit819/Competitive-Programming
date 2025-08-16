#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, a[200005];

void solve() {
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    if (s % 2 != 0) {
        cout << "NO\n";
    } else if (s - a[n - 1] < a[n - 1]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
