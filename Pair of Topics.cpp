#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n],b[n];
	vector<int> c(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
		c[i] = a[i]-b[i];
	}
	sort(c.begin(),c.end());
	int ans=0;
	for(int i=0;i<n-1;i++){
		c[i] *= (-1);
		ans += (c.end()-upper_bound(c.begin()+i+1, c.end(), c[i]));
	}
	cout << ans << endl;
	return 0;
}
signed main(){
	int t=1;
//	cin >> t;
	while(t--){
		solve();
	}
}
