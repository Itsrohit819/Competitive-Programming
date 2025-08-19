#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,a,b;
vector<int> v;

int check(int x){
    vector<int> dp(n+1,0), pre(n+1,0);
    dp[0]=1;
    pre[0]=1;
    int last=-1;
    for(int i=1;i<=n;i++){
        if(v[i-1] >= x){
            last = i;
        }
        int l = i - b;
        int r = i - a;
        if(r >= 0 && last != -1){
            int rr = min(r, last - 1);
            if(rr >= l){
                int flag = pre[rr];
                if(l-1 >= 0){
                    flag -= pre[l-1];
                }
                if(flag > 0){
                    dp[i] = 1;
                }
            }
        }
        pre[i] = pre[i-1] + dp[i];
    }
    return dp[n];
}

int solve(){
    cin >> n >> a >> b;
    v.resize(n);
    int mn = 1e18, mx = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mn = min(mn,v[i]);
        mx = max(mx,v[i]);
    }
    int l = mn, r = mx, ans = mn;
    while(l <= r){
        int mid = (l + r) / 2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}

signed main(){
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
