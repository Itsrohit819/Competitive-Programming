#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin >> p;
	for(int i=0;i<p;i++){
		int n,x,sum=0;
		cin >> n >> x;
		int a[n],b[n];
		for(int j=0;j<n;j++){
			cin >> a[j];
		}
		for(int j=0;j<n;j++){
			cin >> b[j];
		}
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[j]>a[k]){
					int temp1=a[j];
					a[j]=a[k];
					a[k]=temp1;
				}
				if(b[j]<b[k]){
					int temp2=b[j];
					b[j]=b[k];
					b[k]=temp2;
				}
			}
		}
		for(int j=0;j<x;j++){
			if(a[j]<b[j]){
				a[j]=b[j];
			}
		}
		for(int j=0;j<n;j++){
			sum=sum+a[j];
		}
		cout << sum << endl;
	}
}