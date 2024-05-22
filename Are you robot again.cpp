#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int j=0;j<n;j++){
		string a;
		cin >> a;
		int flag=0;
		for(int i=0;i<a.size()-1;i++){
			if(a[i]=='i'&&a[i+1]=='t'){
				flag=1;
			}
		}
		if(flag==0){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
}