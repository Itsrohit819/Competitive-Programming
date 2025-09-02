#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,x;
		cin >> n >> x;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			cin >> b[i];
		}
		for(int i=0;i<n;i++){
			for(int k=i+1;k<n;k++){
				if(a[i]>a[k]){
					int temp1=a[i];
					a[i]=a[k];
					a[k]=temp1;
					int temp2=b[i];
					b[i]=b[k];
					b[k]=temp2;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]<=x){
				x+=b[i];
			}
		}
		cout << x << endl;
	}
}