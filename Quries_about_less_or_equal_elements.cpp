#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n;
	cin >> m >> n;
	long long a[m],b[n];
	for(long long i=0;i<m;i++){
		cin >> a[i];
	}
	for(long long i=0;i<n;i++){
		cin >> b[i];
	}
	sort(a,a+m);
	for(long long i=0;i<n;i++){
		cout << upper_bound(a,a+m,b[i])-a << " ";
	}
}