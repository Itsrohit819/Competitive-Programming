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
		int cnt=0;
		for(int i=0;i<n;i++){
			if(a[i]==0){
				int k=i;
				while(a[k]==0 && k<n){
					k++;
				}
				if(cnt<(k-i+1)){
					cnt=k-i;
				}
			}
		}
		if(cnt==0){
			cout << "0" << endl;
		}
		else{
			cout << cnt << endl;
		}
		
	}
}