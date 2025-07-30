#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int modp(int x) {
    int r = x % mod;
    return r < 0 ? r + mod : r;
}

void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    int d = b - a, c = k / 3;
    if (c * 3 == k) c--;
    int r = k % 3;
    if (c % 2) a = -a, b = -b, d = -d;
    if (r == 1) cout << modp(a);
    else if (r == 2) cout << modp(b);
    else cout << modp(d);
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
