#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,flag=0;
		cin >> n;
		string a,b;
		cin >> a >> b;
		for(int i=0;i<n;i++){
			if(a[i]=='R'){
				if(b[i]=='B' || b[i]=='G'){
					flag=1;
				}
			}
			if(b[i]=='R'){
				if(a[i]=='B' || a[i]=='G'){
					flag=1;
				}
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