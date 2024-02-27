#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int m,flag=0;
		cin >> m;
		int a[m];
		for(int j=0;j<m;j++){
			cin >> a[j];
		}
		sort(a,a+m);
		for(int j=0;j<(m-1);j++){
			if(a[j]==a[j+1]){
				flag=1;
			}
		}
		if(flag==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}