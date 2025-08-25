#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(){
	int n;
	cin >> n;
	if(n>96){
		cout << "99\n";
	}
	else if(n>69){
		cout << "96\n";
	}
	else if(n>66){
		cout << "69\n";
	}
	else if(n>9){
		cout << "66\n";
	}
	else if(n>6){
		cout << "9\n";
	}
	else{
		cout << "6\n";
	}
	return 0;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
	cin>>t;
    while(t--) solve();
}
