#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a,b;
		cin >> a >> b;
		if(b>=2*a){
			cout << a << " " << 2*a << endl;
		}
		else{
			cout << "-1 -1" << endl;
		}
	}
}