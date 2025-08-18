#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> pi(n,0);
    for(int i = 1; i < n; i++){
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j]){
            j = pi[j-1];
        }
        if(s[i] == s[j]){
            j++;
        }
        pi[i] = j;
    }
    int m = pi[n-1];
    if(m > n/2){
        cout << "YES\n";
        cout << s.substr(0,m) << "\n";
    }
    else{
        cout << "NO\n";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
