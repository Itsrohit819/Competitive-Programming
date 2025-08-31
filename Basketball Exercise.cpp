#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int solve(){
    cin>>n;
    vector<int>a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
    for(int i=1;i<=n;i++){
		cin>>b[i];
	}
    int d1=0,d2=0;
    for(int i=1;i<=n;i++){
        int x=max({d2+a[i],a[i],d1});
        int y=max({d1+b[i],b[i],d2});
        d1=x; d2=y;
    }
    cout<<max(d1,d2);
    return 0;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
//    cin >> t;
    while(t--){
    	solve();
	}
}
