#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum += (a[i]-1);
		}
		if(sum>0){
			cout << sum << endl;
		}
		else if(sum==0){
			cout << "0" << endl;
		}
		else {
			cout << "1" << endl;
		}
	}
}