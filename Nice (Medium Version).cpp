#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(){
	int n;
	cin >> n;
	vector<int> v;
    queue<int> q;
    q.push(6);
    q.push(9);
    while(!q.empty()){
        int x=q.front();
		q.pop();
        if(x>1e18) continue;
        if(x>=5) v.push_back(x);
        if(x<=1e17){
            q.push(x*10+6);
            q.push(x*10+9);
        }
    }
    for(int i=0;i<n;i++){
    	int l,r,ans=0;
    	cin >> l >> r;
    	int indl = lower_bound(v.begin(),v.end(),l)-v.begin();
    	int indr = upper_bound(v.begin(),v.end(),r)-v.begin()-1;
		ans = indr-indl;
		cout << ans+1 << endl;
	}
	
	return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1; 
	//cin>>t;
    while(t--) solve();
}
