#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		vector<int> b;
		vector<int> c;
		int i=1;
		b.push_back(a[0]);
		while(a[0]==a[i]){
			b.push_back(a[i]);
			i++;
		}
		if(i==n){
			cout << "-1" << endl;
		}
		else{
			for(int k=i;k<n;k++){
				c.push_back(a[k]);
			}
			cout << b.size() << " " << c.size() << endl;
			for(int x=0;x<b.size();x++){
				cout << b[x] << " ";
			}
			cout << endl;
			for(int x=0;x<c.size();x++){
				cout << c[x] << " ";
			}
			cout << endl;
		}
	}
}