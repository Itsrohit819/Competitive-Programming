#include<bits/stdc++.h>
#define int long long
using namespace std;

int ask(int l, int r){
	cout << "? " << l << " " << r << endl;
	int ans;
	cin >> ans;
	return ans;
}

int solve(){
	int n;
	cin >> n;
	vector<int> v(n+1,0);
	int val = ask(1,2);
	int cur = ask(1,3);
	v[3] = cur-val;
	int temp = ask(2,3);
	v[2] = temp - v[3];
	v[1] = val - v[2];
	for(int i=4;i<=n;i++){
		int cnt = ask(i-1,i);
		v[i] = cnt-v[i-1];
	}
	cout << "! ";
	for(int i=1;i<=n;i++){
		cout << v[i] << " ";
	}
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
