#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,cnt=0;
	cin >> m >> n;
	char a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		int flag=0;
		for(int j=0;j<n;j++){
			if(a[i][j]=='S'){
				flag=1;
			}
		}
		if(flag==0){
			cnt+=n;
			for(int j=0;j<n;j++){
				a[i][j]='q';
			}
		}
	}
	for(int j=0;j<n;j++){
		int flag=0;
		for(int i=0;i<m;i++){
			if(a[i][j]=='S'){
				flag=1;
			}
		}
		if(flag==0){
			for(int i=0;i<m;i++){
				if(a[i][j]=='.'){
					cnt++;
					a[i][j]='q';
				}
			}
		}
	}
	cout << cnt;
}