#include<bits/stdc++.h>
#define int long long
using namespace std;
int dist(string a, string b) {
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return (b.size() - i) + (a.size() - i);
}

int solve() {
    string s;
    cin >> s;
    vector<string> p2;
    for (int i = 0; i < 60; i++) {
        int x = (1LL << i);
        string t = "";
        while (x) {
            t += (x % 10 + '0');
            x /= 10;
        }
        reverse(t.begin(), t.end());
        p2.push_back(t);
    }

    int res = 1e18;
    for (auto &x : p2) {
        int d = dist(x, s);
        if (d < res) {
            res = d;
        }
    }
    cout << res << '\n';
    return 0;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
