#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b,c,d;
		cin >> a >> b >> c >> d;
		if(d>=2*c){
			cout << (a+b)*c << endl;
		}
		else{
			if(a<b){
				cout << (a*d)+((b-a)*c) << endl;
			}
			else{
				cout << (b*d)+((a-b)*c) << endl;
			}
		}
	}
}