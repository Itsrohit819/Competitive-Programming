#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int max=a[0],smax=-1,x=0;
		for(int i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
				x=i;
			}
		}
		for(int i=0;i<n;i++){
			if(i!=x){
				if(smax<a[i]){
					smax=a[i];
				}
			}
			
		}
		for(int i=0;i<n;i++){
			if(a[i]==max){
				cout << max-smax << " ";
			}
			else{
				cout << a[i]-max << " ";
			}
		}
		cout << endl;
	}
}