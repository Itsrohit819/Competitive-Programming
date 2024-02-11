#include<iostream>
using namespace std;
int main(){
	long long n;
	int sum=0;
	cin >> n;
	int cnt=0;
	while(n>=1){
		if(n%2==0){
			n=n/2;
		}
		else{
			n=n/2;
			cnt++;
		}
	}
	cout << cnt << endl;
	
	
	
	
}