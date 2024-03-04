#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long a[7];
		for(int j=0;j<7;j++){
			cin >> a[j];
		}
		if((a[0]+a[1])>a[2]){
			cout << a[0] << " " << a[1] << " " << a[2] << endl;
		}
		else{
			cout << a[0] << " " << a[1] << " " << a[3] << endl;
		}
	}
}