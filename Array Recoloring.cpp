#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve() {
	int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int s = 0;
    if (k >= 2) {
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < k; i++) {
            s += v[i];
        }
        s += v[k];
    } else {
        int mx = *max_element(v.begin(), v.end());
        if (v[0] == mx || v[n - 1] == mx) {
            sort(v.rbegin(), v.rend());
            s = v[0] + v[1];
        } else {
            s = mx + max(v[0], v[n - 1]);
        }
    }
    
    return s;
}

signed main() {
    int t;
	cin >> t;
	while(t--) cout << solve() << '\n';
}