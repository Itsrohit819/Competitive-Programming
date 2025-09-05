#include<bits/stdc++.h>
#define int long long
using namespace std;

int check(int mid, vector<pair<int,int>> &a){
    int cnt = 0;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i].second>=cnt && a[i].first >= mid-cnt-1){
            cnt++;
        }
    }
    return cnt >= mid;
}

void solve(){
	int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    int l = 0, r = n, ans = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(check(mid, a)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << "\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
