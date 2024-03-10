#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	if(n==1 && x==10){
		cout << "-1" << endl;
	}
	else{
		if(x!=10){
			for(int i=0;i<n;i++){
				cout << x;
			}
		}
		else{
			for(int i=1;i<n;i++){
				cout << 1;
			}
			cout << 0;
		}
	}
	
}