#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
    cin >> n;
    if(n==1){
    	cout << n << " " << n << endl;
    	return 0;
	}
    int ans=n;
    for(int i=1;i*i<n;i++){
    	if(n%i == 0 && lcm(i,n/i)==n){
    		ans = min(ans,max(i,n/i));
		}
	}
	cout << n/ans << " " << ans << endl;
	return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
	//cin>>t;
    while(t--){
		solve();
	}
}
