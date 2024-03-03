#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a[4],b[4];
		for(int j=0;j<4;j++){
			cin >> a[j] >> b[j];
		}
		for(int j=0;j<4;j++){
			for(int k=j+1;k<4;k++){
				if(a[j]>a[k]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
					int temp1=b[j];
					b[j]=b[k];
					b[k]=temp1;
				}	
			}
		}
		cout << abs((b[1]-b[0])*(b[3]-b[2])) << endl;
	}
}