#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a="codeforces";
	for(int i=0;i<n;i++){
		int cnt=0;
		string str;
		cin >> str;
		for(int i=0;i<10;i++){
			if(a[i]!=str[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}