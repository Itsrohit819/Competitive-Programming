#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	sort(a,a+n);
	int sum=0,cnt=0;
	for(int i=0;i<n;i++){
		if(sum <= a[i]){
			cnt++;
			sum += a[i];
		}
	}
	cout << cnt;
	return 0;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
//    cin >> t;
    while(t--){
    	solve();
	}
}
