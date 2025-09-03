#include<bits/stdc++.h>
#define int long long
using namespace std;

double check(vector<double> &v, int n){
	vector<double> p(n);
	p[0] = v[0];
	p[1] = v[1]+max(p[0],double(0));
	for(int i=2;i<n;i++){
		p[i] = v[i] + max(p[i-1],p[i-2]);
	}
	return max(p[n-1],p[n-2]);
}

int solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	double l=0,r=1e12;
	double avg;
	for(int i=0;i<=100;i++){
		double mid = (l+r)/2;
		vector<double> a(n);
		for(int j=0;j<n;j++){
			a[j] = v[j]-mid;
		}
		if(check(a,n) >= 0){
			avg = mid;
			l = mid;
		}
		else{
			r = mid;
		}
	}
	int left=0,right=1e12;
	int med;
	while(left <= right){
		int m = (left+right)/2;
		vector<double> temp(n);
		for(int i=0;i<n;i++){
			if(v[i] >= m){
				temp[i] = 1;
			}
			else{
				temp[i] = -1;
			}
		}
		if(check(temp,n) > 0){
			med = m;
			left = m+1;
		}
		else{
			right = m-1;
		}
	}
	cout << setprecision(7) << avg << endl;
	cout << med << endl;
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
