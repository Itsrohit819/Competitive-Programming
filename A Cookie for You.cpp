#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
	int a,b,n,m;
	cin >> a>> b >> n >> m;
	if(n+m > a+b){
		cout << "No\n";
	}
	else{
		if(min(a,b) < m){
			cout << "No\n";
		}
		else{
			cout << "Yes\n";
		}
	}
	return 0;
}
signed main(){
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
}
