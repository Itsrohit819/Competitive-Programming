#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int cnt=0;
	int n =a.size();
	vector<pair<int,int>> v;
	v.push_back(make_pair(0,1));
	for(int i=1;i<a.size();i++){
		if(a[i-1]=='('){
			cnt++;	
		}
		else{
			cnt--;
		}
		v.push_back(make_pair(cnt,i+1));
	}
	for(int i=0;i<n;i++){
		v[i].second=(-1)*v[i].second;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		v[i].second=(-1)*v[i].second;
	}
	for(int i=0;i<n;i++){
		cout << a[v[i].second-1];
	}
}