#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,cl,ce,v;
vector<int> l,e;
int x,y,x2,y2;

int check(int r,int val){
    if(x==x2){
        return abs(y-y2);
    }
    if(r>=1 && r<=m){
        return abs(y-r)+abs(y2-r)+(abs(x2-x)+val-1)/val;
    }
    return (int)1e18;
}

void solve(){
    cin >> n >> m >> cl >> ce >> v;
    l.resize(cl+2);
    e.resize(ce+2);
    l[0] = 0;
    for(int i=1;i<=cl;i++){
        cin >> l[i];
    }
    l[cl+1] = m+1;
    e[0] = 0;
    for(int i=1;i<=ce;i++){
        cin >> e[i];
    }
    e[ce+1] = m+1;
    int q;
    cin >> q;
    while(q--){
        cin >> x >> y >> x2 >> y2;
        int i = lower_bound(l.begin(),l.end(),y)-l.begin();
        int ans=min(check(l[i-1],1),check(l[i],1));
        int j = lower_bound(e.begin(),e.end(),y)-e.begin();
        ans=min(ans,min(check(e[j-1],v),check(e[j],v)));
        cout << ans << "\n";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
	    solve();
	}
}
