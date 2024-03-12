#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a;
		cin >> a;
		if(a==1){
			cout << "2" << endl;
		}
		else if(a%3==0){
			cout << a/3 << endl;
		}
		else{
			cout << a/3 + 1 << endl;
		}
	}
}