#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		long long a,b,n;
		cin >> a >> b >>n;
		int cn=0;
		int j;
		if(a>b){
			j=1;
		}
		else{
			j=0;
		}
		while(a<=n && b<=n){
			if(j%2 ==0){
				a+=b;
				cn++;
			}
			else{
				b+=a;
				cn++;
			}
			j++;
		}
		cout << cn << endl;
	}
	
}