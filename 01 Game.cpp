#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	while(m--){
		string a;
		cin >> a;
		stack<int> s;
		s.push(a[0]);
		int cnt=0;
		for(int i=1;i<a.size();i++){
			if(s.empty()){
				s.push(a[i]);
				continue;
			}
			if(s.top()!=a[i]){
				s.pop();
				cnt++;
			}
			else{
				s.push(a[i]);
			}
		}
		if(cnt%2==0){
			cout << "NET" << endl;
		}
		else{
			cout << "DA" << endl;
		}
	}
}