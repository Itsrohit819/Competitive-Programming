#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int cnt;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a'){
			cnt++;
		}
	}
	if(cnt>(s.size()/2)){
		cout << s.size();
	}
	else{
		cout << cnt*2-1;
	}
}
