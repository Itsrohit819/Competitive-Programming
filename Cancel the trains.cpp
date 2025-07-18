#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	while(m--){
		int x,y;
		cin >> x >> y;
		int p[x],q[y];
		for(int i=0;i<x;i++){
			cin >> p[i];
		}
		for(int i=0;i<y;i++){
			cin >> q[i];
		}
		int cnt=0;
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				if(p[i]==q[j]){
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}