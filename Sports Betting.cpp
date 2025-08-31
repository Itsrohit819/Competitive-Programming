#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
    int n;
	cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(auto &p:m){
        if(p.second>=4){
            cout<<"Yes\n";
            return 0;
        }
    }
    int flag=0,cur=0;
    for(auto &p:m){
        int x=p.first;
        if(flag==0 && p.second>=2){
            flag=1;
            cur=x;
        }
        else if(flag==1){
            if(x!=cur+1){
                flag= (p.second>=2 ? 1:0);
                cur=x;
                continue;
            }
            cur=x;
            if(p.second>=2){
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}

signed main(){
    int t;
	cin>>t;
    while(t--){
    	solve();
    }
}
