#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,k;
vector<array<int,3>> v;

bool check(int m){
    vector<pair<int,int>> ex,de;
    for(auto &x:v){
        if(x[0]>m){
            ex.push_back({x[1],x[0]-m});
        }
        if(x[0]<m){
            de.push_back({x[2],m-x[0]});
        }
    }
    sort(ex.begin(),ex.end());
    sort(de.begin(),de.end());
    int i=0,j=0,c=0;
    while(i<ex.size() && j<de.size()){
        int t=min(ex[i].second,de[j].second);
        c+=t*(ex[i].first+de[j].first);
        if(c>k){
            return 0;
        }
        ex[i].second-=t;
        de[j].second-=t;
        if(ex[i].second==0){
            i++;
        }
        if(de[j].second==0){
            j++;
        }
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    v.resize(n);
    int s=0,mx=0;
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1]>>v[i][2];
        s+=v[i][0];
        if(v[i][0]>mx){
            mx=v[i][0];
        }
    }
    int l=(s+n-1)/n,r=mx,ans=mx;
    while(l<=r){
        int m=(l+r)/2;
        if(check(m)){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<ans<<"\n";
}
