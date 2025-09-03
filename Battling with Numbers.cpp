#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M=998244353;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    map<int,int> m1;
    for(int i=0;i<n;i++){
        cin >> m1[a[i]];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    map<int,int> m2;
    for(int i=0;i<m;i++){
        cin >> m2[b[i]];
    }
    int p=1, flag=0;
    for(auto &x:m2){
        if(x.second > m1[x.first]){
            flag=1;
        }
    }
    for(auto &x:m1){
        if(x.second > m2[x.first]){
            p=(p*2)%M;
        }
    }
    if(flag){
        cout << 0 << "\n";
    }
    else{
        cout << p << "\n";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
    	solve();
	}
}
