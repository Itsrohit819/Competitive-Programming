#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int cnt1=0;
		string s;
		cin >> s;
		for(int j=0;j<s.size();j++){
			if(s[j]=='B'){
				cnt1++;
			}
			else{
				cnt1--;
			}
		}
		if(cnt1==0){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}