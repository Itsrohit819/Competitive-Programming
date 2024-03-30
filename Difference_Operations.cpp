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
		for(int i=1;i<n;i++){
			int flag=0;
			for(int j=0;j<i;j++){
				if(a[i]%a[j]==0){
					flag=1;
				}
			}
			if(flag==0){
				cnt=1;
			}
		}
		if(cnt==1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;;
		}
	}
}