#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin >> p;
	for(int j=0;j<p;j++){
		int n,flag=0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			while(s[i]==s[i+1]){
				i++;
			}
			for(int k=i+1;k<n;k++){
				if(s[i]==s[k]){
					flag=1;
				}
			}
		}
		if(flag==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
