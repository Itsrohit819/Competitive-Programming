#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long k;
		cin >> k;
		if(k==5){
			cout << "2 4" << endl;
		}
		else{
			for(int i=2;i<(k-1);i++){
				if((k-1)%i==0){
					cout << i <<" "<< (k-1)/i << endl;
					break;
				}
			}
		}
	}
}