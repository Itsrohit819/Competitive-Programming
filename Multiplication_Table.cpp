#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin >> n;
	long long k;
	cin >> k;
	for(int i=2;i<=n;i++){
		if(k%i==0 && (k/i)<=n){
			cnt++;
		}
	}
	if(k<=n){
		cout << cnt+1 << endl;
	}
	else{
		cout << cnt << endl;
	}
}