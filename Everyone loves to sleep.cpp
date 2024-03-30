#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin >> m;
	for(int j=0;j<m;j++){
		int n,a,b,sum,cnt=1441;
		cin >> n >> a >> b;
		sum = a*60 + b;
		int x[n],y[n],s[n];
		for(int i=0;i<n;i++){
			cin >> x[i] >> y[i] ;
			s[i]=60*x[i]+y[i];
		}	
		for(int i=0;i<n;i++){
			if(s[i]>=sum && (60*(x[i]-a)+y[i]-b)<cnt){
				cnt=60*(x[i]-a)+y[i]-b;
			}
			if(s[i]<sum && (24*60+60*(x[i]-a)+y[i]-b)<cnt){
				cnt = 24*60+60*(x[i]-a)+y[i]-b;
			}
		}
		cout << cnt/60 << " " << cnt%60 << endl;
	}
}