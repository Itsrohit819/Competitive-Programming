#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,b,c;
	cin >> n >> b >> c;
	if(c>=n){
		cout << n << endl;
		return 0;
	}
	if(b==0){
		if(c>=n){
			cout << n << endl;
		}
		else{
			if(c==n-1 || c==n-2){
				cout << n-1 << endl;
			}
			else{
				cout << "-1\n";
			}
		}
		return 0;
	}
//	if(b==1 && c==0){
//		cout << 0 << endl;
//		return 0;
//	}
	cout << n-(1+(n-c-1)/b) << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
