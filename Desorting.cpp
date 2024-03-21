#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,cnt=0;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]<a[i-1]){
				cnt=1;
			}
		}
		if(cnt==1){
			cout << "0" << endl;
		}
		else{
			long long min=10000000005;
			for(int i=1;i<n;i++){
				if(min>((a[i]-a[i-1])/2+1)){
					min = (a[i]-a[i-1])/2 + 1;
				}
			}
			cout << min << endl;
		}
	}
}