#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b,c,d;
		cin >> a >> b >> c >> d;
		if((a+b)>c){
			cout << a <<" "<< b <<" "<< c << endl;
		}
		else if((b+c)>d){
			cout << b <<" "<< c <<" "<< d<< endl;
		}
		else{
			cout << b <<" "<< c <<" "<< c << endl;
		}
	}
}