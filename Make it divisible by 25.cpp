#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int k=0;k<n;k++){
		string a;
		int cnt=19;
		cin >> a;
		int l=a.size();
		for(int i=l;i>=0;i--){
			if(a[i]=='0'){
				for(int j=i-1;j>=0;j--){
					if(a[j]=='0' && (l-1-j-2)<cnt){
						cnt=l-1-j-1;
						break;
					}
					if(a[j]=='5' && (l-1-j-1)<cnt){
						cnt=l-1-j-1;
						break;
					}
				}
			}
			if(a[i]=='5'){
				for(int j=i-1;j>=0;j--){
					if(a[j]=='7' && (l-1-j-1)<cnt){
						cnt=l-1-j-1;
					}
					if(a[j]=='2' && (l-1-j-1)<cnt){
						cnt=l-1-j-1;
					}
				}
			}
		}
		cout << cnt << endl;
	}
}