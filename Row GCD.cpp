#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	if(n > 1){
		int d=a[0]-a[1];
		for(int i=2;i<n;i++){
			d = gcd(d,abs(a[0]-a[i]));
		}
		for(int i=0;i<m;i++){
			cout << gcd(d,a[0]+b[i]) << " ";
		}
		cout << endl;
	}
	else{
		for(int i=0;i<m;i++){
			cout << a[0]+b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
