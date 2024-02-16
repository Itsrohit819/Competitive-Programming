#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s,b;
	cin >> s;
	int cnt1=1,cnt2=0;
	for(int i=1;i<n;i++){
		string q;
		cin >> q;
		if(s==q){
			cnt1++;
		}
		else{
			b=q;
			cnt2++;
		}
		
	}
	if(cnt1>cnt2){
		cout << s << endl;
	}
	else{
		cout << b << endl;
	}
}