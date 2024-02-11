#include<iostream>
using namespace std;

int main(){
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		int n,cnt1=0,cnt2=0;
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
		int j=1;
		while(a[j]>=a[0] && a[j]<=(a[0]+n-1) && a[j]!=a[j-1]){
			 cnt1++;
			 j++;
		}
		j=n-2;
		while(a[j]<=a[n-1] && a[j]>=(a[n-1]-n+1) && a[j]!=a[j-1]){
			cnt2++;
			j--;
		}
		if(cnt1>=cnt2){
			cout << cnt1+1 << endl;
		}
		else{
			cout << cnt2+1 << endl;
		}
		
	}
}