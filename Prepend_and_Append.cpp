#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int l;
		cin >> l;
		string s;
		cin >> s;
		int j=0;
		while((s[j]!=s[l-1-j]) && j<(l/2)){
			j++;
		}
		
		cout << l-(2*j) << endl;
	}
}