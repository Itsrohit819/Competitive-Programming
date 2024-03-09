#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	int a[m];
	for(int j=0;j<m;j++){
		cin >> a[j];
		if(a[j]%3==0){
			cout << "Second" << endl;
		}
		else{
			cout << "First" << endl;
		}
		
	}
}