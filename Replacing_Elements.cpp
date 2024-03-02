#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,x;
		cin >> n >> x;
		int a[n],cnt=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]<=x){
				cnt++;
			}
		}
		if(cnt==n){
			cout << "YES" << endl;
		}
		else{
			sort(a,a+n);
			if((a[0]+a[1])<=x){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		
	}
}