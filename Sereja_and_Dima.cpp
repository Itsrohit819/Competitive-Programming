#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int sum1=0,sum2=0,i=0,k=0;
	while((i+k)<n){
		if(cnt%2==0){
			if(a[i]>a[n-k-1]){
				sum1=sum1+a[i];
				i++;  
			}
			else{
				sum1=sum1+a[n-k-1];
				k++;
			}
			cnt++;
		}
		else{
			if(a[i]>a[n-k-1]){
				sum2=sum2+a[i];
				i++;  
			}
			else{
				sum2=sum2+a[n-k-1];
				k++;
			}
			cnt++;
		}
	}
	cout << sum1 << " " << sum2 << endl;
}