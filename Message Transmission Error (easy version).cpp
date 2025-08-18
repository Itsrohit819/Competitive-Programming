#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    string s; 
    cin >> s;
    int n = s.size();
    int m = n/2 + 1;
    string ans = "";
    while(m < n){
        bool flag = 1;
        for(int i = 0, j = n-m; j < n; i++, j++){
            if(s[i] != s[j]){
                flag = 0;
            }
        }
        if(flag){
            ans = s.substr(0, m);
            break;
        }
        m++;
    }
    if(ans.size() > 0){
        cout << "YES\n";
        cout << ans << "\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while(t--){
    	solve();
	}
    return 0;
}
