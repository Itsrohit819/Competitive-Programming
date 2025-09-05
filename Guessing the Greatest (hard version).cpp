#include <bits/stdc++.h>
#define int long long
using namespace std;

int ask(int l, int r) {
    cout<<"? "<<l<<" "<<r<<endl;
    int ans;
    cin>>ans;
    return ans;
}

int solve(){
	int n;
    cin>>n;
    int secMax = ask(1, n);
    if(n == 2) {
        if(secMax == 1) {
            cout << "! " << 2 << endl;
        }
        else {
            cout << "! " << 1 << endl;
        }
        return 0;
    }
    int tmp = -1;
    if(secMax != 1) {
        tmp = ask(1, secMax);
    }
    //! if secMax = 1, that means the maximum is to the right
    if(tmp == secMax) {
    	// MAX in left side
        int l = 1;
		int r = secMax - 1;
        int ans;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(ask(mid, secMax) == secMax) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << "! " << ans << endl;        
    }
    else {
    	// MAX in right side
        int l = secMax + 1;
		int r = n;
        int ans;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(ask(secMax, mid) == secMax) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
    	}
        cout << "! " << ans << endl;
    }
    return 0;
}

signed main() {
    int t=1;
    //cin >> t;
    while(t--){
    	solve();
	}
}