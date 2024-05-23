#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		long long int a,b,c,d;
		cin >> a >> b >> c >> d;
		if((d>(b*c+a*(b-1)))||(d<b*c)){
			cout << "-1" << endl;
		}
		else{
			long long int x[a];
			if(d>=(b*c+b-1)){
				x[a-1]=b*c+b-1;
				d -= (b*c+b-1);
				for(int j=a-2;j>=0;j--){
					if(d>=(b-1)){
						x[j]=b-1;
						d -= (b-1);
					}
					else{
						x[j]=d;
						d=0;
					}
				}
			}
			else{
				x[a-1]=d;
				for(int j=a-2;j>=0;j--){
					x[j]=0;
				}
			}
			for(int j=0;j<a;j++){
				cout << x[j] << " ";
			}
			cout << endl;
		}
	}
}