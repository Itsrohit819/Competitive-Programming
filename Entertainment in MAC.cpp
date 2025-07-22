#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		string a;
		cin >> a;
		int l=a.size();
		int i=0;
		while(a[i]==a[l-1-i]){
			i++;
		}
		if(i==(l/2)-1){
			cout << a << endl;
		}
		else if(a[i]<=a[l-1-i]){
			cout << a << endl;
		}
		else{
			for(int i=l-1;i>=0;i--){
				cout << a[i];
			}
			cout << a << endl;
		}
	}
}