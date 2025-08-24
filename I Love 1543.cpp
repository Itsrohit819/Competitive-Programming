#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
    int n,m;
	cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
    int ans=0;
    // Doing it layer by layer
    for(int i=0;i<min(n,m)/2;i++){
        int t=i,b=n-i-1,l=i,r=m-i-1;
        vector<char>v;
        for(int j=l;j<=r;j++){
			v.push_back(a[t][j]);
		}
        for(int j=t+1;j<=b;j++){
			v.push_back(a[j][r]);
		}
        for(int j=r-1;j>=l;j--){
			v.push_back(a[b][j]);
		}
        for(int j=b-1;j>t;j--){
			v.push_back(a[j][l]);
		}
        int L=v.size();
        string s;
        for(char c:v){
			s.push_back(c);
		}
        s+=s;
        for(int j=0;j<L;j++){
            if(s.substr(j,4)=="1543"){
				ans++;
			}
        }
    }
    cout<<ans<<"\n";
    return 0;
}

signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
