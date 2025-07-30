#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        if (s[i] == '-'){
			a[i] = -1;
		}
        else{
			a[i] = 1;
		}
        if (i > 0){
			a[i] += a[i - 1];
		}
    }
	int ans = n, mn = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < mn) {
            mn = a[i];
            ans += (i + 1);
        }
    }
    cout << ans << '\n';
    return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
