#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	string a;
	cin >> a;
	int n=a.size(),flag=0,min=-1;
	for(int i=0;i<n-1;i++){
		if(a[i] == '2' || a[i] == '4' || a[i] == '6' || a[i] == '8' || a[i] == '0'){
			if(a[i] < a[n-1]){
				swap(a[i],a[n-1]);
				flag=1;
				break;
			}
			min = a[i];
		}
	}
	if(flag == 0){
		for(int i=n-1;i>=0;i--){
			if(a[i] == min){
				swap(a[i],a[n-1]);
				flag=1;
				break;
			}
		}
	}
	if(!flag){
		cout << -1;
		return 0;
	}
	cout << a << endl; 
	return 0;
}
signed main(){
	int t=1;
//	cin >> t;
	while(t--){
		solve();
	}
}
