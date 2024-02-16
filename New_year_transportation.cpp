#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,sum=0;
	cin>> n >> p;
	int a[n-1];
	for(int i=0;i<(n-1);i++){
		cin >> a[i];
	}
	for(int i=0;i<(p-1);){
		i=i+a[i];
		if(i==(p-1)){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}