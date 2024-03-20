#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	for(int j=0;j<x;j++){
		int n,m,sum=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		cin >> m;
		int b[m];
		for(int i=0;i<m;i++){
			cin >> b[i];
			sum+=b[i];
			if(sum>=n){
				sum-=n;
			}
		}
		cout << a[sum] << endl;
	}
}
		