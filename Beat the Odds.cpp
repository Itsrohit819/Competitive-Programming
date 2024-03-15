#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,ev=0,od=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]%2==0){
				ev++;
			}
			else{
				od++;
			}
		}
		if(ev>od){
			cout << od << endl;
			
		}
		else{
			cout << ev << endl;
		}
	}
}