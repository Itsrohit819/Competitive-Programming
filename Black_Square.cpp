#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4],sum=0;
	for(int i=0;i<4;i++){
		cin >> a[i];
	}
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			sum=sum+a[0];
		}
		else if(s[i]=='2'){
			sum=sum+a[1];
		}
		else if(s[i]=='3'){
			sum=sum+a[2];
		}
		else{
			sum=sum+a[3];
		}
	}
	cout << sum << endl;
}