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
		
		int se=0,so=0,flag=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				se+=a[i];
			}
			else{
				so+=a[i];
			}
		}
		if(se<=so){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
		
		
	}
}