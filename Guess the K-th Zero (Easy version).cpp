#include<bits/stdc++.h>
#define int long long
using namespace std;

int ask(int l,int r){
    cout << "? " << l << " " << r << endl;
    int x;
    cin >> x;
    return x;
}

int solve(){
    int n,t,k;
    cin >> n >> t >> k;
    int l=1,r=n,ans;
    while(l<=r){
        int mid = (l+r)/2;
        int s = ask(1,mid);
        s = mid - s;
        if(s >= k){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout << "! " << ans << endl;
    return 0;
}

signed main(){
    int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
