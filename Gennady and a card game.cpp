#include<bits/stdc++.h>
using namespace std;
int main(){
	char b[2];
	cin >> b;
	char a[5][2];
	for(int i=0;i<5;i++){
		cin >> a[i][0] >> a[i][1];
	}
	for(int i=0;i<5;i++){
		if((b[0]==a[i][0])||(b[1]==a[i][1])){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" ;
}