#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,flag=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(n<=2){
			cout << "Yes" << endl;
		}
		else if(n==3){
			sort(a,a+n);
			if(a[0]==a[1] || a[1]==a[2]){
				cout << "Yes" << endl;
			}
			else{
				cout << "No" << endl;
			}
		}
		else{
			for(int i=0;i<n;i++){
				int cnt=0;
				for(int k=0;k<n;k++){
					if(a[i]==a[k]){
						cnt++;
					}
				}
				if(cnt<=1){
					flag=1;
				}
			}
			if(flag==1){
				cout << "No" << endl;
			}
			else{
				cout << "Yes" << endl;
			}
		}
	}
}
		