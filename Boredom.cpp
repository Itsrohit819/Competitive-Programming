#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n;
	cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	m[a[i]] += a[i];
	}
	for(int i=2;i<100001;i++){
		m[i] = max(m[i-1], m[i]+m[i-2]);
	}
	cout << m[100000];
	return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
	//cin>>t;
    while(t--){
		solve();
	}
}
