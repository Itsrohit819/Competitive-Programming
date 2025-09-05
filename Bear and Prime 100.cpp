#include<bits/stdc++.h>
#define int long long
using namespace std;

string ask(int n){
	cout << n << endl;
	string s;
	cin >> s;
	return s;
}

int solve(){
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(11);
	v.push_back(13);
	v.push_back(17);
	v.push_back(19);
	v.push_back(23);
	v.push_back(29);
	v.push_back(31);
	v.push_back(37);
	v.push_back(41);
	v.push_back(43);
	v.push_back(47);
	int cnt=0,ind=-1;
	for(int i=0;i<v.size();i++){
		if(ask(v[i]) == "yes"){
			cnt++;
			ind = v[i];
		}
	}
	if(cnt > 1){
		cout << "composite" << endl;
	}
	else if(cnt == 1){
		if(ind*ind>1 && ind*ind<=100 && ask(ind*ind) == "yes"){
			cout << "composite" << endl;
		}
		else{
			cout << "prime" << endl;
		}
	}
	else{
		cout << "prime" << endl;
	}
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
