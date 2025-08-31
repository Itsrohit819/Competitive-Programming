#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n; 
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int l=0,r=n-1,t=0,b=n-1,x=n*n;
    while(l<=r && t<=b){
        for(int j=l;j<=r;j++){
        	a[t][j]=x--;
        }
        t++;
        for(int i=t;i<=b;i++){
        	a[i][r]=x--;
        }
        r--;
        if(t<=b){
            for(int j=r;j>=l;j--){
				a[b][j]=x--;
			}
            b--;
        }
        if(l<=r){
            for(int i=b;i>=t;i--){
				a[i][l]=x--;
			}
            l++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
			cout<<a[i][j]-1<<" ";
		}
        cout<<"\n";
    }
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
