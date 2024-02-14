#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	string d;
	int cnt=0,k=c.size();
	for(int i=0;i<a.size();i++){
		d=d+a[i];
	}
	for(int i=0;i<b.size();i++){
		d=d+b[i];
	}
	for(int i=0;i<(a.size()+b.size());i++){
		for(int j=0;j<(c.size());j++){
			if(d[i]==c[j]){
				c.erase(c.begin()+j);
				cnt++;
				break;
			}
		}
	}
	if((cnt==k) && (cnt==d.size())){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
}