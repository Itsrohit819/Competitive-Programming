#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char a[3];
		for(int j=0;j<3;j++){
			cin >> a[j];
		}
		cout << a[0]+a[2]-96 << endl;
	}
}