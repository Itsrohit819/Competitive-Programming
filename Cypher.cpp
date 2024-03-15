#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,x;
		char ch;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			cin >> x;
			for(int k=0;k<x;k++){
				cin >> ch;
				if(ch=='U'){
					if(a[i]!=0){
						a[i]-=1;
					}
					else{
						a[i]=9;
					}
				}
				else{
					if(a[i]!=9){
						a[i]+=1;
					}
					else{
						a[i]=0;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}