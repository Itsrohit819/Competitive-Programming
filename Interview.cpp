#include<bits/stdc++.h>
#define int long long
using namespace std;

int ask(vector<int>& q){
    cout << "? " << q.size() << " ";
    for(int x : q){
        cout << x << " ";
    }
    cout << endl;
    int x;
    cin >> x;
    return x;
}

int solve(){
    int n;
    cin >> n;
    vector<int> v(n+1,0);
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
    	cin >> a[i];
	}
    for(int i = 1; i <= n; i++){
        v[i] = v[i-1]+a[i];
    }
    int l = 1, r = n, ans = -1;
    while(l <= r){
    	vector<int> q;
        int m = (l + r) / 2;
        for(int i=1;i<=m;i++){
        	q.push_back(i);
		}
		int val = ask(q);
        if(val > v[m]){
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << "! " << ans << endl;
    return 0;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
