#include<iostream>
using namespace std;
int main(){
	int n,sum1=0,sum2=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<=(n+1)/2;i++){
		if(i%2==0){
			if(a[i]>=a[n-i-1]){
				sum1=sum1+a[i];
			}
			else{
				sum1=sum1+a[n-i-1];
			}
		}
		else{
			if(a[i]>=a[n-i-1]){
				sum2=sum2+a[i];
			}
			else{
				sum2=sum2+a[n-i-1];
			}
		}
	}
	cout << sum1 << " " << sum2 << endl;
}