#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
int n, x, a, y, b, k;

int check(int m){
	// LCM(a,b) = (a*b)/Gcd(a,b);
    int g = __gcd(a, b);
    int l = (a/g) * b;
    int both = m/l;
    int c1 = m/a - both;
    int c2 = m/b - both;

    vector<int> p;
    for(int i=0;i<both;i++){
        p.push_back(x + y);
    }
    for(int i=0;i<c1;i++){
        p.push_back(x);
    }
    for(int i=0;i<c2;i++){
        p.push_back(y);
    }
    sort(p.rbegin(), p.rend());
    int sum = 0;
    for(int i=0;i<p.size();i++){
        sum += ((v[i] * p[i])/100);
        if(sum >= k){
            return 1;
        }
    }
    return 0;
}

int solve(){
    cin >> n;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    cin >> x >> a >> y >> b >> k;
    if(x < y){
        swap(x, y);
        swap(a, b);
    }

    int l = 1, r = n, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
