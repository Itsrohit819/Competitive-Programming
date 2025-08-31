#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n],l[n+1],r[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int flag=0;
	l[0] = r[0] = 0;
	for(int i=1;i<=n;i++){
		cin >> l[i] >> r[i];
		if(a[i-1] != 1){
			l[i] = max(l[i], l[i-1]+0);
		}
		else{
			l[i] = max(l[i], l[i-1]+1);
		}
		if(a[i-1] != 0){
			r[i] = min(r[i], r[i-1]+1);
		}
		else{
			r[i] = min(r[i], r[i-1]);
		}
		if(l[i]>r[i]){
			flag=1;
		}
	}
	if(flag){
		cout << "-1\n";
		return 0;
	}
	int cur = l[n];
	for(int i=n-1;i>=0;i--){
		if(a[i] == -1){
			int val = max(cur-1, l[i]);
			a[i] = cur-val;
		}
		cur -= a[i];
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
