#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(long long j=0;j<m;j++){
		long long n,cnt=0;
		cin >> n;
		long long a[n],b[n];
		for(long long i=0;i<n;i++){
			cin >> a[i];
		}
		for(long long i=0;i<n;i++){
			cin >> b[i];
		}
		long long min1=a[0],min2=b[0];
		for(long long i=1;i<n;i++){
			if(min1>a[i]){
				min1=a[i];
			}
			if(min2>b[i]){
				min2=b[i];
			}
		}
		for(long long i=0;i<n;i++){
			if(a[i]>min1 && b[i]>min2){
				if((a[i]-min1)>(b[i]-min2)){
					cnt+=a[i]-min1;
				}
				else{
					cnt+=b[i]-min2;
				}
			}
			else{
				if(a[i]>min1){
					cnt+=a[i]-min1;
				}
				if(b[i]>min2){
					cnt+=b[i]-min2;
				}
			}
		}
		cout << cnt << endl;
	}
}