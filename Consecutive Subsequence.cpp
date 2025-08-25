#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
	cin>>n;
    int a[n];
    map<int,int> dp;
    int ans=0,cur=0;
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	dp[a[i]] = dp[a[i]-1]+1;
    	if(dp[a[i]] > ans){
    		ans = dp[a[i]];
    		cur = a[i];
		}
	}
	cout << ans << endl;
	vector<int> v;
	for(int i=n-1;i>=0;i--){
		if(a[i] == cur){
			cur--;
			v.push_back(i);
		}
	}
	reverse(v.begin(),v.end());
	for(int i:v){
		cout << i+1 << " ";
	}
	cout << endl;
    return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
	//cin>>t;
    while(t--){solve();}
}
