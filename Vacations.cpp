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
	int dp[n+1][3];
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	for (int i = 1; i <= n; i++) {
		dp[i][0] = INT_MIN;
		dp[i][1] = INT_MIN;
		dp[i][2] = INT_MIN;
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        if (a[i-1] == 1 || a[i-1] == 3) {
            dp[i][1] = max(dp[i][1], dp[i-1][0] + 1);
            dp[i][1] = max(dp[i][1], dp[i-1][2] + 1);
        }
        if (a[i-1] == 2 || a[i-1] == 3) {
            dp[i][2] = max(dp[i][2], dp[i-1][0] + 1);
            dp[i][2] = max(dp[i][2], dp[i-1][1] + 1);
        }
    }
	int ans = max({dp[n][0],dp[n][1],dp[n][2]});
	cout << n-ans << endl;
	return 0;
}
signed main(){
	int t=1;
//	cin >> t;
	while(t--){
		solve();
	}
}
