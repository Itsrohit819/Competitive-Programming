#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n];
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>> a[i];
		m[a[i]]++;
	}
	vector<int> v;
	for(int i=0;i<n;i++){
		if(m[a[i]] > 0){
			v.push_back(m[a[i]]);
			m[a[i]]=0;
		}
	}
	n = v.size();
	sort(v.rbegin(),v.rend());
	int ans=0,temp=INT_MAX;
	for(int i=0;i<n;i++){
		int cur = min(v[i],temp-1);
		if(cur<0){
			cur = 0;
		}
		ans += cur;
		temp = cur;
	}
	cout << ans << endl;
	return 0;
}
signed main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
