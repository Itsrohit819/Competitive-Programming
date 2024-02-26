#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,sum=0,se=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int b[n],x=0;
		if(n%2==0){
			for(int i=0;i<n/2;i++){
				b[x]=a[i];
				b[x+1]=a[n-1-i];
				x+=2;
			}
			for(int i=0;i<n;i++){
				cout << b[i] << " ";
			}
			cout << endl;
		}
		else{
			for(int i=0;i<n/2;i++){
				b[x]=a[i];
				b[x+1]=a[n-1-i];
				x+=2;
			}
			for(int i=0;i<(n-1);i++){
				cout << b[i] << " " ;
			}
			cout << a[(n-1)/2] << endl;
		}
	}
}

		