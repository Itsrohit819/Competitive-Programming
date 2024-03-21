#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,c;
		long long b,d;
		cin >> a>> b >> c>> d;
		long long k=b*c;
		long long l=a*d;
		
		if(k==l){
			cout << "0" << endl;
		}
		else if(k==0 || l==0){
			cout << "1" << endl;
		}
		else if(k%l==0||l%k==0){
			cout << "1" << endl;
				
		}
		else{
			cout << "2" << endl;
		}
	}
}