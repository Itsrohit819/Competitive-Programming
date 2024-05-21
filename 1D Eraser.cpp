#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,x,cnt=0;
		cin >> n >> x;
		string a;
		cin >> a;
		for(int i=0;i<n;i++){
			if(a[i]=='W'){
				continue;
			}
			else{
				cnt+=1;
				i+=(x-1);
			}
		}
		cout << cnt << endl;
	}
}