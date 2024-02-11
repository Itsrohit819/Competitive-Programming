#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	if(n==1){
		cout << "0" << endl;
	}
	else{
		int max=a[0],sum=0;
		for(int i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		for(int i=0;i<n;i++){
			sum=sum+max-a[i];
		}
		cout << sum << endl;
	}
	
}
