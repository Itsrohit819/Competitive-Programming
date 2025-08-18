#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	int c =0;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<m;j++){
			a[i][j] = s[j];
			if (a[i][j] == '1'){
				c++;
			}
		}
	}
	int ans = 0; 
	for(int i = 1;i < n;i++){
		for(int j=1;j<m;j++){
			int curr = a[i][j] + a[i-1][j-1] + a[i][j-1] + a[i-1][j] - '0' - '0' -'0' -'0';
			ans = max(ans,curr - (4-curr));
		}
	}
	cout << c-ans;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
