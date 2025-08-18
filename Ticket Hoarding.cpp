#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,m,k;
	cin >> n >> m >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans=0,cur=0;
	for(int i=0;i<n;i++){
		int temp = min(m,k);
		ans += (temp * (a[i]+cur));
		cur += temp;
		k -= temp;
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
