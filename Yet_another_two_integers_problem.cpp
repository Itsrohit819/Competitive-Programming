#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b;
		cin >> a >> b;
		if(a==b){
			cout << "0" << endl;
		}
		else if(abs(a-b)<=10){
			cout << "1" << endl; 
		}
		else{
			if(abs(a-b)%10==0){
				cout << abs(a-b)/10 << endl;
			}
			else{
				cout << (abs(a-b)/10)+1 << endl;
			}
		}
	}
}