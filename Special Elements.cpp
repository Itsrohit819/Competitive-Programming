#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n],mx=INT_MIN;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
		mx = max(mx,a[i]);
		m[a[i]]++;
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		int sum = a[i];
		for(int j=i+1;j<n;j++){
			sum += a[j];
			if(sum > mx){
				break;
			}
			if(m[sum]){
				cnt+=m[sum];
				m[sum]=0;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
