#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int j=0;j<n;j++){
		cin >> a[j];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		int c=0,j=i+1;
		while(a[j]>a[j-1] && j<n){
			j++;
			c++;
		}
		if(cnt<c){
			cnt=c;
		}
		i+=c;
	}
	cout << cnt+1 << endl;
}