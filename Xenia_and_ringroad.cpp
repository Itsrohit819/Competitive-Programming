#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,n,sum=0;
	cin >> a >> n;
	long long b[n];
	for(long long i=0;i<n;i++){
		cin >> b[i];
	}
	sum=sum+b[0]-1;
	for(long long i=1;i<n;i++){
		if(b[i]>=b[i-1]){
			sum=sum+b[i]-b[i-1];
		}
		else{
			sum=sum+a-b[i-1]+b[i];
		}
	}
	cout << sum << endl;	
}