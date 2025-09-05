#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> ask(int ind, int n){
	vector<int> v(3);
	if(ind-1 > 0){
		cout << "? " << ind-1 << endl;
		cin >> v[0];
	}
	else{
		v[0] = INT_MAX;
	}
	cout << "? " << ind << endl;
	cin>> v[1];
	if(ind+1 <= n){
		cout << "? " << ind+1 << endl;
		cin >> v[2];
	}
	else{
		v[2] = INT_MAX;
	}
	return v;
}

int solve(){
	int n;
	cin >> n;
	int l=1,r=n,ans;
	while(l<=r){
		int mid = (l+r)/2;
		vector<int> v = ask(mid,n);
		if((v[1]<v[2]) && (v[1]<v[0])){
			ans = mid;
			break;
		}
		else if((v[1]<v[2]) && (v[1]>v[0])){
			r = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	cout << "! " << ans << endl;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
