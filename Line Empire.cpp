#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> x(n+1);
    x[0]=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int d=x[i]-x[i-1];
        int cnt=n-i+1;
        ans += min((a+b)*d, b*d*cnt);
    }
    cout<<ans<<"\n";
    return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
