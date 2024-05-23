#include<bits/stdc++.h>
using namespace std;
int prime(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long int a;
		cin >> a;
		long long int k=1+a;
		while(prime(k)==0){
			k++;
		}
		long long int j=k+a;
		while(prime(j)==0){
			j++;
		}
		if((k*k*k)<(k*j)){
			cout << k*k*k << endl;
		}
		else{
			cout << k*j << endl;
		}
	}
}