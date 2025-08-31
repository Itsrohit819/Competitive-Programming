#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,s;
	cin >> n >> s;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int l=-1,r=n+1,ans=0,cur=0;
	while(l<=r){
		int mid = (l+r)/2;
		if(mid == n+1){
			break;
		}
		int val = 0;
		int b[n];
		for(int i=0;i<n;i++){
			b[i] = a[i]+(mid*(i+1));
		}
		sort(b,b+n);
		for(int i=0;i<mid;i++){
			val += b[i];
		}
		if(val <= s){
			ans = mid;
			cur = val;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	cout << ans << " " << cur << endl;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
