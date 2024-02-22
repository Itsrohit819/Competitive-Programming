#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				int temp1=b[j];
				b[j]=b[i];
				b[i]=temp1;
			}
			if(a[i]==a[j]){
				if(b[i]>b[j]){
					int temp1=b[j];
					b[j]=b[i];
					b[i]=temp1;
				}
			}
		}
	}
	int k=m-1,cnt=1;
	int x=a[k],y=b[k];
	while(k>=0 &&x==a[k] && y==b[k]){
		cnt++;
		k--;
		}
	k=m-1;
	while(k<n && x==a[k] && y==b[k]){
		cnt++;
		k++;
	}
	cout << cnt-2 << endl;
}