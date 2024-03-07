#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin >> n;
	for(int i=0;i<n;i++){
		string keys;
		cin >> keys;
		string s;
		cin >> s;
		int a,b;
		for(int j=1;j<s.size();j++){
			for(int k=0;k<26;k++){
				if(s[j-1]==keys[k]){
					a=k;
				}
				if(s[j]==keys[k]){
					b=k;
				}
			}
			cnt+=abs(b-a);
		}
	}
} 
	