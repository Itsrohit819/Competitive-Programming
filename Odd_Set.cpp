#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,se=0,so=0;
		cin >> n;
		int a[2*n];
		for(int i=0;i<2*n;i++){
			cin >> a[i];
			if(a[i]%2==0){
				se++;
			}
			else{
				so++;
			}
		}
		if(se==so){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}
