#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,k;
	cin >> n >> k;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	while(k--){
		int cur=0,ind=-1;
		for(int i=1;i<n;i++){
			if(abs(a[i]-a[i-1]) > cur){
				cur = abs(a[i]-a[i-1]);
				ind = i;
			}
		}
		if(ind!=-1){
			a[ind] = min(a[ind],a[ind-1]);
			a[ind-1] = a[ind];
		}
	}
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
