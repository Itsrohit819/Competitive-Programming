#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

int modpow(int a, int b){
    int res = 1;
    a %= MOD;
    while(b > 0){
        if(b & 1){
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

void solve(){
    int l, r, k;
    cin >> l >> r >> k;
    int base = 9 / k + 1;
    int ans = (modpow(base, r) - modpow(base, l) + MOD) % MOD;
    cout << ans << "\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
