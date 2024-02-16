#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a>=b){
			if(b>=c){
				cout << b << endl;
			}
			else{
				if(a>=c){
					cout << c << endl;
				}
				else{
					cout << a << endl;
				}
			}
		}
		else{
			if(a>=c){
				cout << a << endl;
			}
			else{
				if(b>=c){
					cout << c << endl;
				}
				else{
					cout << b << endl;
				}
			}
		}
	}
}