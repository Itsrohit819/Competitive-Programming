#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int a,b;
		int c;
		cin >> a >> b;
		c=(a-2)/b;
		if(a<=2){
//			c=(a+b)/b;
			cout << 1 << endl;
		}
		else{
			if((a-2)%b==0){
				cout << c+1 << endl;
			}
			else{
				cout << c+2 << endl;
			}
		}
	}
}