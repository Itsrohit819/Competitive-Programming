#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(a[0]==a[n-1]){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			b[0]=a[n-1];
			b[1]=a[0];
			for(int i=2;i<n;i++){
				b[i]=a[i-1];
			}
			for(int i=0;i<n;i++){
				cout << b[i] << " ";
			}
			cout << endl;
		}
	}
}