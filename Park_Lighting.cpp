#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		if((a*b)%2==0){
			cout << a*b/2 << endl;
		}
		else{
			cout << ((a*b)/2)+1 << endl;
		}
	}
}