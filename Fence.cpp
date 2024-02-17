#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,ind;
	cin >> n >> p;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int sum=100000000;
	for(int i=0;i<(n-p+1);i++){
		int k=0;
		for(int j=i;j<(i+p);j++){
			k=k+a[j];
		}
		if(k<sum){
			ind=i+1;
			sum=k;
		}
	}
	cout << ind << endl;
}