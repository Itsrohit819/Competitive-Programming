#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int m,x;
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> x;
		cout << upper_bound(a,a+n,x)-a << endl;
	}
}