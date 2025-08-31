#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	string s;
	cin >> s;
	int n=s.size();
	for(int i=1;i<n;i++){
		for(int j=0;j<=8;j++){
			if(i-j >= 1){
				if(s[i-j]-s[i-j-1] > 1){
					char temp=s[i-j];
					s[i-j] = s[i-j-1];
					s[i-j-1] = temp-1;
				}
			}
		}
	}
	cout << s << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
