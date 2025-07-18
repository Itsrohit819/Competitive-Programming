#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int m = 0, al = 0, bo = 0, l = 1, r = n, p = 0;
    while (l <= r) {
        int c = 0;
        m++;
        if (m % 2) {
            while (c <= p && l <= r) c += a[l++];
            al += c;
        } else {
            while (c <= p && l <= r) c += a[r--];
            bo += c;
        }
        p = c;
    }

    cout << m << " " << al << " " << bo << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
