#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	b[0]=1;
	c[0]=a[0];
	for(int i=1;i<n;i++){
		b[i]=c[i-1]+1;
		c[i]=b[i]+a[i]-1;
	}
	sort(b,b+n);
	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		int x;
		cin >> x;
		cout << upper_bound(b,b+n,x)-b << endl;
	}
	
}