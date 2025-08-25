#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    string s;
    cin >> s;
    int n=s.size();
    int c=0;
    int ans=0;
    for(int i=0;i<n;i++){
    	if(s[i] == '('){
    		c++;
		}
		else{
			c--;
			if(c>=0){
				ans+=2;
			}
		}
		if(c<0){
			c=0;
		}
	}
	cout << ans << endl;
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
