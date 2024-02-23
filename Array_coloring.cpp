#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int m,sum=0;
		cin >> m;
		int a[m];
		for(int j=0;j<m;j++){
			cin >> a[j];
			sum =sum+a[j];
		}
		if(sum%2==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}