#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		if(a>=b){
			if(a>(2*b)){
				cout << a*a << endl;
			}
			else{
				cout << 2*b*b*2 << endl;
			}
		}
		else{
			if(b>(2*a)){
				cout << b*b << endl;
			}
			else{
				cout << 2*a*a*2 << endl;
			}
		}
	}
}