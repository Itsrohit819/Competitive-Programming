#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,cnt=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<(n-1);i++){
			if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2==1&&a[i+1]%2==1)){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}