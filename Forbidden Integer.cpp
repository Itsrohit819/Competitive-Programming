#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int a,b,c;
		cin >> a >> b >> c;
		if((b==1 && c==1)||(a%2==1&&b==2&&c==1)){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
			if(c!=1){
				cout << a << endl;
				for(int i=1;i<=a;i++){
					cout << "1" << " ";
				}
				cout << endl;
			}
			else{
				if(a%2==0){
					cout << a/2 << endl;
 					for(int i=2;i<=a;i+=2){
	  					cout << "2" << " ";
					}
					cout << endl;
				}
				else{
					a=a-3;
					cout << a/2+1 << endl;
					for(int i=2;i<=a;i+=2){
						cout << "2" << " ";
					}
					cout << 3 << endl;
				}
			}
		}
	}
}