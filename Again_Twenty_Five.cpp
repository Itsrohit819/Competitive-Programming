#include<bits/stdc++.h>
using namespace std;
int pow(long long n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return 5;
	}
	if(n%2==0){
		return (pow(n/2)*pow(n/2))%100;
	}
	else{
		return (pow(n/2)*pow(n/2)*5)%100;
	}
	
}
int main(){
	long long p;
	cin >> p;
	cout << pow(p) << endl;
	return 0;
}
// We can also directly print 25 because we always get 25 at last.