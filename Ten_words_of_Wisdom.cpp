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
			cin >> a[i] >> b[i];
		}
		int cnt=0,x;
		for(int i=0;i<n;i++){
			if(a[i]<=10){
				if(cnt<b[i]){
					cnt=b[i];
					x=i;
				}
			}
		}
		cout << x+1 << endl;
	}
}