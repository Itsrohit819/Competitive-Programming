#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if(a>20){
			while(b--){
				a = (a/2)+10;
			}
		}
		while(c--){
			a-=10;
		}
		if(a<=0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}