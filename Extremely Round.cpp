#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a<=9){
			cout << a << endl;
		}
		else if(a<=90){
			cout << 9+a/10 << endl;
		}
		else if(a<=900){
			cout << 18+a/100 << endl;
		}
		else if(a<=9000){
			cout << 27+a/1000 << endl;
		}
		else if(a<=90000){
			cout << 36+a/10000 << endl;
		}
		else{
			cout << 45+a/100000 << endl;
		}
	}
}