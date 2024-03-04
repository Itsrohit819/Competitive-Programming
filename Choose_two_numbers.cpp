#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	int a[n],max1=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(max1<a[i]){
			max1=a[i];
		}
	}
	cin >> m;
	int b[m],max2=0;
	for(int j=0;j<m;j++){
		cin >> b[j];
		if(max2<b[j]){
			max2=b[j];
		}
	}
	cout << max1 << " " << max2 << endl;
}