#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[12];
	for(int i=0;i<12;i++){
		cin >> a[i];
	}
	sort(a,a+12);
	reverse(a,a+12);
	for(int i=1;i<12;i++){
		a[i]=a[i-1]+a[i];
	}
	if(n==0){
		cout << "0" << endl;
		return 0;
	}
	int i=0;
	while(a[i]<n){
		i++;
		if(i==12){
			cout << "-1" << endl;
			return 0;
		}
	}
	
	cout << i+1 << endl;
	
}