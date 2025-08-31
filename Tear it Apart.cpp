#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	string s;
	cin >> s;
	int n=s.size();
	int cnt=INT_MAX;
	for(char k='a';k<='z';k++){
		vector<int> v(n,1);
		for(int i=0;i<n;i++){
			if(s[i] == k){
				v[i]=0;
			}
		}
		int ans=0,y=0;
		for(int i=0;i<n;i++){
			if(v[i]==1){
				y++;
				ans = max(ans,y);
			}
			else{
				y=0;
			}
		}
		cnt = min(cnt,ans);
	}
	if(cnt == 0){
		cout << "0\n";
		return 0;
	}
	cout << (int)log2(cnt)+1 << endl;
	
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
