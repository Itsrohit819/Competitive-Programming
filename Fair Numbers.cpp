#include<bits/stdc++.h>
using namespace std;
int fair(long long int m){
	long long int x=m;
	while(x>0){
		if(x%10==0){
			x/=10;
		}
		else{
			if(m%(x%10)!=0){
				return 0;
			}
			else{
				x/=10;
			}
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
		while(fair(a)==0){
			a++;
		}
		cout << a << endl;
	}
}