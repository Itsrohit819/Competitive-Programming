#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int ind=1;
	cout << n*2-1 << endl;
	cout << "1 1 " << n << endl;
	for(int i=0;i<n-1;i++){
		cout << i+2 << " " << 1 << " " << n-i-1 << endl;
		cout << i+2 << " " << n-i << " " << n << endl;
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
