#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,b;
		cin >> n >> b;
		int a[n];
		long long p=1;
		for(int i=0;i<n;i++){
			cin >> a[i];
			p=p*a[i];
		}
		if(2023%p==0){
			cout << "YES" << endl;
			for(int i=0;i<b;i++){
				cout << 2023/p << " ";
				p = p * (2023/p);
			}
			cout << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}