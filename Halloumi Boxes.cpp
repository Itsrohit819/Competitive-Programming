#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,p,flag=0;
		cin >> n >> p;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]<a[i-1]){
				flag=1;
			}
		}
		if(flag==1){
			if(p==1){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
		else{
			cout << "YES" << endl;
		}
	}
}