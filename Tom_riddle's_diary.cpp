#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s[n];
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	cout << "NO" << endl;
	for(int i=1;i<n;i++){
		int flag=0;
		for(int j=0;j<i;j++){
			if(s[i]==s[j]){
				flag=1;
			}
		}
		if(flag==1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}