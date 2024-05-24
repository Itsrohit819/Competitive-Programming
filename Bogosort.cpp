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
		for(int i=0;i<n;i++){
			for(int k=i+1;k<n;k++){
				if(a[i]<a[k]){
					int temp=a[i];
					a[i]=a[k];
					a[k]=temp;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}