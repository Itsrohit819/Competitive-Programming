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
	int l=0,r=0,ans=0;
	for(int i=0;i<n;i++){
		int cnt1=0,cnt2=0;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[i]){
				cnt1++;
			}
			else if(a[j] > a[i]){
				cnt2++;
			}
			if(cnt2-cnt1 < ans){
				ans = cnt2-cnt1;
				l=i;
				r=j;
			}
		}
	}
	cout << l+1 << " " << r+1 << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
