#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	if(n==0){
		cout << "1" << endl;
		return 0;
	}
	while(n>=4){
		n-=4;
	}
	if(n%4==0){
		cout << "6" << endl;
	}
	else if(n%3==0){
		cout << "2" << endl;
	}
	else if(n%2==0){
		cout << "4" << endl;
	}
	else{
		cout << "8" << endl;
	}
}
