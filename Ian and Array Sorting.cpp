#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n],sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(i&1){
			sum += a[i];
		}
		else{
			sum -= a[i];
		}
	}
	if(n%2){
		cout << "YES\n";
	}
	else{
		if(sum >= 0){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
