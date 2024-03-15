#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,p,max=0,cnt=0;
		cin >> n >> p;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])<=p){
				cnt++;
			}
			else{
				cnt=0;
			}
			if(cnt>max){
				max=cnt;
			}
		}
		cout << n-max-1 << endl;
	}
}