#include<bits/stdc++.h>
#define int long long
using namespace std;

int ask(int l, int r){
    cout << "? " << l << " " << r << endl;
    int len = r - l + 1;
    vector<int> v(len);
    for(int i=0;i<len;i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int x : v){
        if(x >= l && x <= r){
            cnt++;
        }
    }
    return cnt;
}

int solve(){
    int n;
    cin >> n;
    int l = 1, r = n, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        int cnt = ask(l, mid);
        if(cnt % 2 == 1){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << "! " << ans << endl;
    return 0;
}

signed main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
