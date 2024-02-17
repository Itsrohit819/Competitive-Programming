#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,sum=0;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0;i<k;i++){
		if(a[i]<=0){
			sum=sum-a[i];
		}
		
	}
	cout << sum << endl;
}