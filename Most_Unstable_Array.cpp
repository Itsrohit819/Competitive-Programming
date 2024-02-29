#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b;
		cin >> a >> b;
		if(a==1){
			cout << "0" << endl;
		}
		else if(a==2){
			cout << b << endl;
		}
		else{
			cout << b*2 << endl;
 		}
	}
}