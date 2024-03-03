#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a%2==0){
			for(int j=0;j<a;j+=2){
				cout << j+2 << " " << j+1 << " ";
			}
			cout << endl;
		}
		else{
			for(int j=0;j<(a-3);j+=2){
				cout << j+2 << " " << j+1 << " ";
			}
			cout << a << " " << a-2 << " "  << a-1 << endl;
		}
	}
}
