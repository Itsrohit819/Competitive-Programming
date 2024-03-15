#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		if(a==1 && b==1){
			cout << "0" << endl;
		}
		else if(a<=b){
			cout << (a+b-2)+a << endl;
		}
		else{
			cout << (a+b-2)+b << endl;
		}
	}
}