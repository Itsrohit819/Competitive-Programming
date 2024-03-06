#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin >> s >> t;
	int i=s.size()-1;
	int j=t.size()-1;
	if(s==t){
		cout << "0" << endl;
		return 0;
	}
	while(s[i]==t[j]){
		i--;
		j--;
	}
	cout << i+j+2 << endl;
}
	