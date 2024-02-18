#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a,cnt=0;
		cin >> a;
		string s;
		cin >> s;
		for(int j=0;j<a;j++){
			if(s[j]=='*'&&s[j+1]=='*'){
				break;
				
			}
			if(s[j]=='@'){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}