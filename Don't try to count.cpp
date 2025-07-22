#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int x,y,flag=0;
		cin >> x >> y;
		string a,b;
		cin >> a >> b;
		while(a.find(b)==string::npos && flag<=6){
			a.append(a);
			flag++;
		}
		if(flag>=6){
			cout << "-1" << endl;
		}
		else{
			cout << flag << endl;
		}
	}
}