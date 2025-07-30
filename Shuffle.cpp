#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,x,m;
	cin >> n >> x >> m;
	int l,r;
	int c1=x,c2=x;
	for(int i=0;i<m;i++){
		cin >> l >> r;
		if(l<=c2 && r>=c1){
			c1 = min(c1,l);
			c2 = max(c2,r);
		} 
	}
	cout << c2-c1+1 << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
