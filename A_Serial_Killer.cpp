#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c,d;
	cin >> a >> b;
	int n;
	cin >> n;
	cout << a <<" "<< b << endl;
	for(int i=0;i<n;i++){
		cin >> c >> d;
		if(a==c){
			cout << d << " " << b << endl;
			a=d;
		}
		else{
			cout << d << " " << a << endl;
			b=d;
		}
	}
}