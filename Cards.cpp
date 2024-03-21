#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,cnt=0;
	cin >> m;
	string a;
	cin >> a;
	for(int j=0;j<m;j++){
		if(a[j]=='n'){
			cout << "1 ";
		}
	}
	for(int j=0;j<m;j++){
		if(a[j]=='z'){
			cout << "0 ";
		}
	}
}