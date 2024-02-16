#include<bits/stdc++.h>
using namespace std;
int main(){
	int p;
	cin >> p;
	for(int i=0;i<p;i++){
		int n,cnt1=0,cnt2=0;
		cin >> n;
		int a[n];
		for(int j=0;j<n;j++){
			cin >> a[j];
		}
		for(int j=0;j<n;j++){
			if(a[j]%2==0 && j%2==1){
				cnt1++;
			}
			if(a[j]%2==1 && j%2==0){
				cnt2++;
			}
		}
		if(cnt1==cnt2){
			cout << cnt1 << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}
