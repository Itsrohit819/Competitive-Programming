#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,s=0,s1=0;
		cin >> a;
		for(int j=a/2;j<a;j++){
			s=s+pow(2,j);
		}
		for(int j=1;j<=(a-1)/2;j++){
			s1=s1+pow(2,j);
		}
		cout << pow(2,a)+s1-s << endl;
	}
}