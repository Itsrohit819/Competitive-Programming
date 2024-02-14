#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin >> n >> a;
	int k=n,i=1;
	while(((n%10)!=a) && ((n%10)!=0)){
		n=k*i;
		i++;
	}
	cout << n/k << endl;
}