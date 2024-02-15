#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int p,q,r;
	p=n;
	q=n/10;
	r=n%10+(n/100)*10;
	if(p>=q && p>=r){
		cout << p << endl;
	}
	else if(q>=p && q>=r){
		cout << q << endl;
	}
	else{
		cout << r << endl;
	}
}