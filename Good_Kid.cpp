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
		int min=a[0],ind=0;
		for(int i=1;i<n;i++){
			if(min>a[i]){
				min=a[i];
				ind=i;
			}
		}
		int prod=1;
		a[ind]=a[ind]+1;
		for(int i=0;i<n;i++){
			prod=prod*a[i];
		}
		cout << prod << endl;
	}
}