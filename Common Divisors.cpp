#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int val = a[0],cnt=0;
	for(int i=1;i<n;i++){
		val = gcd(val,a[i]);
	}
	//cout << val << endl;
	for(int i=1;i*i<=val;i++){
		if(val % i == 0){
			if(i*i == val){
				cnt+=1;
			}
			else{
				cnt+=2;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
signed main(){
	int t=1;
//	cin >> t;
	while(t--){
		solve();
	}
}
