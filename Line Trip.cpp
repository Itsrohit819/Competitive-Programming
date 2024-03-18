#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,p;
		cin >> n >> p;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int k=a[0]-0;
		int l=(p-a[n-1])*2;
		int ma=0;
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])>ma){
				ma = a[i]-a[i-1];
			}
		}
		if(k>=l && k>=ma){
			cout << k << endl;
		}
		else if(l>=k && l>=ma){
			cout << l << endl;
		}
		else{
			cout << ma << endl;
		}
	}
}