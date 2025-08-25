#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve() {
    int n;
    cin >> n;
    vector<int> a(n),b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	if(n==1){
		cout << "1\n";
		return 0;
	}
	vector<int> x = a, y = b;
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	int A = x[n-1], B = x[n-2], C = x[0], D = x[1];
	int E = y[n-1], F = y[n-2], G = y[0], H = y[1];
	int ans = 1e18;
	for(int i=0;i<n;i++) {
		int u = (a[i] == A ? B : A);
		int v = (a[i] == C ? D : C);
		int s = (b[i] == E ? F : E);
		int t = (b[i] == G ? H : G);
		int w = u - v + 1;
		int h = s - t + 1;
		int z = w * h;
		if(z == n-1){
			if(max(w,h) == n){
				if(w == min(w,h)){
					w++;
				}
				else{
					h++;
				}
			}
			else{
				if(w<h){
					h++;
				}
				else{
					w++;
				}
			}
		}
		z = w*h;
		ans = min(ans, z);
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
	return 0;
}