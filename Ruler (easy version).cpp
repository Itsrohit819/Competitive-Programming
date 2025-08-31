#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
    int l=2,r=999;
    while(l<r){
        int m=(l+r)/2;
        cout<<"? "<<m<<" "<<m<<endl;
        cout.flush();
        int v;
        cin>>v;
        if(v==m*m){
            l=m+1;
        }
        else{
            r=m;
        }
    }
    cout<<"! "<<l<<endl;
    cout.flush();
    return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
