#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int q,n;
	cin >> q >> n;
	int ans=0;
	while(q--){
		int a,b,x,y;
		cin >> a >> b >> x >> y;
		//main diagonal and directions
		if(x==y && a==b){
			ans++;
		}
		//other diagonal and directions
		if(a != b && x+y==n){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
