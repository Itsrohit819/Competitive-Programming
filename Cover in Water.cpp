#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,flag=0,cnt=0;
		cin >> n;
		string a;
		cin >> a;
		for(int i=2;i<n;i++){
			if(a[i-2]=='.' && a[i-1]=='.' && a[i]=='.'){
				flag=1;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]=='.'){
				cnt+=1;
			}
		}
		if(flag==0){
			cout << cnt << endl;
		}
		else{
			cout << "2" << endl;
		}
	}
}