#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;

    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - '0';
        if (x == 2) a.push_back(2);
        if (x == 3) a.push_back(3);
        if (x == 4) a.insert(a.end(), {3, 2, 2});
        if (x == 5) a.push_back(5);
        if (x == 6) a.insert(a.end(), {5, 3});
        if (x == 7) a.push_back(7);
        if (x == 8) a.insert(a.end(), {7, 2, 2, 2});
        if (x == 9) a.insert(a.end(), {7, 3, 3, 2});
    }

    sort(a.rbegin(), a.rend());
    for (int i = 0; i < a.size(); i++) cout << a[i];
    cout << "\n";
    return 0;
}
