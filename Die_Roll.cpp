#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a>=b){
		
		if(a==1){
			cout << "1" << "/" << "1" << endl;
			return 0;
		}
		if((6-a+1)%2==0){
			cout << (6-a+1)/2 << "/" << 6/2;
		}
		else if((6-a+1)%3==0){
			cout << (6-a+1)/3 << "/" << 6/3;
		}
		else{
			cout << (6-a+1) << "/" << 6;
		}
	}
	else{
		if(b==1){
			cout << "1" << "/" << "1" << endl;
			return 0;
		}
		if((6-b+1)%2==0){
			cout << (6-b+1)/2 << "/" << 6/2;
		}
		else if((6-b+1)%3==0){
			cout << (6-b+1)/3 << "/" << 6/3;
		}
		else{
			cout << (6-b+1) << "/" << 6;
		}
	}
}