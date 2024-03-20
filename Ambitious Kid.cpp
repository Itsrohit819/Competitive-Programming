#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	int a[m],b[m];
	for(int j=0;j<m;j++){
		cin >> a[j];
	}
	for(int i=0;i<m;i++){
		if(a[i]>=0){
			b[i]=a[i];
		}
		else{
			b[i]=abs(a[i]);
		}
	}
	int min=b[0];
	for(int i=1;i<m;i++){
		if(min>b[i]){
			min=b[i];
		}
	}
	cout << min << endl;
}
