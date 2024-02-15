#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt1=0,cnt2=0;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin >> a[i] >> b[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			cnt1++;
		}
		if(a[i]<b[i]){
			cnt2++;
		}
	}
	if(cnt1>cnt2){
		cout << "Mishka" << endl;
	}
	if(cnt1<cnt2){
		cout << "Chris" << endl;
	}
	if(cnt1==cnt2){
		cout << "Friendship is magic!^^" << endl;
	}
}