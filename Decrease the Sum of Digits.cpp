#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n, x;
    cin >> n >> x;
    int s = 0, v = n;
    while (v) {
        s += v % 10;
        v /= 10;
    }
    int a = 0, p = 10;
    while (s > x) {
        int k = p - n % p;
        a += k;
        n += k;
        s = 0;
        v = n;
        while (v) {
            s += v % 10;
            v /= 10;
        }
        p *= 10;
    }
    cout << a << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
