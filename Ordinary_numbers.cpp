#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a;
		cin >> a;
		if(a<=9){
			cout << a << endl;
		}
		else if(a>9 && a<=100) {
			cout << 9+a/11 << endl;
		}
		else if(a>100 && a<=1000){
			cout << 18+a/111<< endl;
		}
		else if(a>1000 && a<=10000){
			cout << 27+a/1111<< endl;
		}
		else if(a>10000 && a<=100000){
			cout << 36+a/11111<< endl;
		}
		else if(a>100000 && a<=1000000){
			cout << 45+a/111111<< endl;
		}
		else if(a>1000000 && a<=10000000){
			cout << 54+a/1111111<< endl;
		}
		else if(a>10000000 && a<=100000000){
			cout << 63+a/11111111<< endl;
		}
		else{
			cout << 72+a/111111111 << endl;
		}
	}
}