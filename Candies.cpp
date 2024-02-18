#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a;
		cin >> a;
		int k=2;
		int x=3;
		while(a%x!=0){
			x=x+2*k;
			k++;
		}
		cout << a/x << endl;
	}
}