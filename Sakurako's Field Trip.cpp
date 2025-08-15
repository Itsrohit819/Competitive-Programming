#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=(n/2)-1;i>=0;i--){
		if(a[i]==a[i+1] || a[n-i-1]==a[n-i-2]){
			swap(a[i],a[n-i-1]);
		}
	}
	int ans=0;
	for(int i=1;i<n;i++){
		if(a[i]==a[i-1]){
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
