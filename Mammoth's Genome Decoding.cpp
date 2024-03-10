#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a;
	cin >> a;
	if(n%4!=0){
		cout << "===" << endl;
	}
	else{
		int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
		for(int i=0;i<n;i++){
			if(a[i]=='A'){
				cnt1++;
			}
			if(a[i]=='G'){
				cnt2++;
			}
			if(a[i]=='C'){
				cnt3++;
			}
			if(a[i]=='T'){
				cnt4++;
			}
		}
		int cnt=n/4;
		if(cnt1>cnt||cnt2>cnt||cnt3>cnt||cnt4>cnt){
			cout << "===" << endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(a[i]=='?' && cnt1<cnt){
					cout << "A";
					cnt1++;
				}
				else if(a[i]=='?' && cnt2<cnt){
					cout << "G";
					cnt2++;
				}
				else if(a[i]=='?' && cnt3<cnt){
					cout << "C";
					cnt3++;
				}
				else if(a[i]=='?' && cnt4<cnt){
					cout << "T";
					cnt4++;
				}
				else{
					cout << a[i];
				}
			}
		}
	}
}