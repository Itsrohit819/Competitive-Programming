#include<bits/stdc++.h>
#define int long long
using namespace std;

int ask(int x, int y){
	cout << "? " << x << " " << y << endl;
	int ans;
	cin >> ans;
	return ans;
}

int solve(){
	vector<int> a = {4, 8, 15, 16, 23, 42};
    int p1 = ask(1, 2);
    int p2 = ask(2, 3);
    int p3 = ask(3, 4);
    int p4 = ask(4, 5);
    vector<int> ans;
    sort(a.begin(), a.end());
    do {
        if (a[0]*a[1] == p1 && a[1]*a[2] == p2 && a[2]*a[3] == p3 && a[3]*a[4] == p4) {
            ans = a;
            break;
        }
    } while (next_permutation(a.begin(), a.end()));
    
    cout << "! ";
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
