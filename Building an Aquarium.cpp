#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m ;
	for(int j=0;j<m;j++){
		long long n,x;
		cin >> n >> x;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(n==1){
			cout << x+a[0] << endl;
		}
		else if(x==1){
			long long max=a[0],min=a[0];
			for(int i=1;i<n;i++){
				if(a[i]>max){
					max=a[i];
				}
				if(a[i]<min){
					min=a[i];
				}
			}
			cout << min+1 << endl;
		}
		else{
			long long max=a[0],min=a[0];
			for(int i=1;i<n;i++){
				if(a[i]>max){
					max=a[i];
				}
				if(a[i]<min){
					min=a[i];
				}
			}
			long long p;
			for(int i=1;i<(x+max);i++){
				int sum=0;
				for(int k=0;k<n;k++){
					if(a[k]<i){
						sum += (i-a[k]);
					}
				}
				if(sum>x){
					p=i;
					break;
				}
			}
			cout << p-min << endl;
		}
	}
}