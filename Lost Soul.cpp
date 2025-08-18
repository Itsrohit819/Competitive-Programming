#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    vector<int> v(n+1, 0);
    int ans = -1;
    if(a[n-1] == b[n-1]){
    	cout << n << endl;
    	return 0;
	}
    for(int i=n-2;i>=0;i--){
        if (a[i]==b[i] || a[i]==a[i+1] || b[i]==b[i+1] || v[a[i]] || v[b[i]]) {
            ans = i;
            break;
        }
        v[a[i+1]] = 1;
        v[b[i+1]] = 1;
    }
    cout << ans + 1 << "\n";
    return 0;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
