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
		sort(a,a+n);
		if(n==1){
			cout << "0" << endl;
		}
		else{
			int l=0,sum=0;
			for(int i=(n/2)-1;i>=0;i--){
				sum+=a[n-1-l]-a[i];
				l++;
			}
			cout << sum << endl;
		}
	}
}