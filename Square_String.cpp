#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string a;
		cin >> a;
		if(a.size()%2==1){
			cout << "NO" << endl;
		}
		else{
			int flag = 0;
			for(int j=0;j<a.size()/2;j++){
				if(a[j]!=a[j+a.size()/2]){
					flag=1;
				}
			}
			if(flag==1){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
}