#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,x=0,y=0,flag=0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(s[i]=='U'){
				x=x+1;
			}
			else if(s[i]=='D'){
				x=x-1;
			}
			else if(s[i]=='R'){
				y=y+1;
			}
			else{
				y=y-1;
			}
			if(x==1 && y==1){
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