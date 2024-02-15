#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	for(char i='a';i<='z';i++){
		for(int j=0;j<n;j++){
			if(i==s[j]){
				cnt++;
				break;
			}
		}
	}
	if(cnt==26){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}