#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int m;
		cin >> m;
		long double k=m-1;
		float a[m],sum=0;
		for(int j=0;j<m;j++){
			cin >> a[j];
			sum+=a[j];
		}
		float x=a[0];
		for(int j=1;j<m;j++){
			if(x<a[j]){
				x=a[j];
			}
		}
		cout << x+((sum-x)/k) << endl;
	}
}
		
		
		