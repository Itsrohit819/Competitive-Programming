#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		long long a;
		cin >> a;
		int min=10;
		if(a<100){
			cout << a%10 << endl;
		}
		else{
			for(int i=0;a>0;i++){
				if((a%10)<min){
					min=a%10;
				}
				a/=10;
			}
			cout << min << endl;
		}
	}
}
		