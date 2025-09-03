#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "NO" << endl;
        return;
    }
    int y = sqrt(n);
    if (y * y != n) {
        cout << "NO" << endl;
        return;
    }
    for (int i=2;i*i<=y;i++) {
        if (y % i == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
