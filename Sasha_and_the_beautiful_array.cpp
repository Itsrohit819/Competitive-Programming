#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin >> p;
	for(int i=0;i<p;i++){
		int n;
		cin >> n;
		int a[n];
		for(int j=0;j<n;j++){
			cin >> a[j];
		}
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(a[j]>a[k]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		int sum=0;
		for(int k=1;k<n;k++){
			sum=sum+(a[k]-a[k-1]);
		}
		cout << sum << endl;
	}
}